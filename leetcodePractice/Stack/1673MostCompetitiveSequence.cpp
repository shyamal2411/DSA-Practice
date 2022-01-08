#include<bits/stdc++.h> 
using namespace std;

class Solution{
    public:
vector<int> mostCompetitive(vector<int>& arr, int k){
 
        int n= arr.size();
        
        stack<int> s;  //stores the elements which have a dilemna. In the end, the elements who remain form the answer.
        
        for(int i=0; i<n; i++){
            
            //n-i-1 elements are left in the array after ith index and k-s.size() is the no. of elements still required for our answer
            while(!s.empty() && arr[i]<s.top() && (n-i-1 >= k-s.size())){
                s.pop();
            }
            
            //push elements if stack has less than k elements (these elements are the ones whose dilemna has not been resolved yet) 
            if(s.size()<k){
                s.push(arr[i]);
            }
        }
        
        //stack s contains our answer now, converting to a vector
        vector<int> ans;
         while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
         }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){

    Solution ss;

    vector<int> arr={2,4,3,3,5,4,9,6};
    int k = 4;
    vector<int> ans = ss.mostCompetitive(arr,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}