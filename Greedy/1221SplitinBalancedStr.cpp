
#include<bits/stdc++.h> 
using namespace std;
/* https://leetcode.com/problems/split-a-string-in-balanced-strings/  */
#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
typedef vector<string> vs;
#define f(i,a,n) for(int i=a;i<n;i++)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<" ";
#define in cin>>
#define out cout<<

class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0, count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L') 
                count--;
            else
                count++;
            if(count==0)
                ans++;
        }
        return ans;
    }
};

void solve(){
int n,k;
string s;
cin>>s;
  Solution ss;
  cout<<ss.balancedStringSplit(s) <<nl;
}

int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) solve();
  
return 0;
}