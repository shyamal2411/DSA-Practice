#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n); 
        ans.push_back(0);
        
        if(n==0)
            return ans;
        for(int i=1;i<=n;i++){
            if(!(i&1)) // bitwise way of writing if(i%2==0)
                ans[i]=ans[i/2];
            else
                ans[i]=ans[i-1]+1;
        }
        return ans;
    }
};

//macin function
int main(){
    int n;
    cin>>n;
    Solution ss;
    vector<int> ans=ss.countBits(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}