#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> beautifulArray(int n) {
        if(n==1)
            return {1};
        vector<int> even=beautifulArray(n/2);
        vector<int> odd=beautifulArray(n-(n/2));
        vector<int> ans;
        for(auto itr:even)
            ans.push_back(2*itr);
        for(auto i:odd)
            ans.push_back((2*i)-1);
    
        return ans;
    }
    
};
int main()
{
    int n;
    cin>>n;
    Solution obj;
    vector<int> ans=obj.beautifulArray(n);
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}