/*
https://leetcode.com/problems/three-divisors/
*/
#include<bits/stdc++.h> 
using namespace std;

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
    bool isThree(int n) {
        int count=0;
        for(int i=1; i<=n; i++){ 
            if (n%i==0)
                count++;
        }
        if(count==3)
            return true;
        
        
            return false;
            
    }
};
void solve(){
int n,k;
in n;
 Solution ss;
    if(ss.isThree(n))
    cout<<"true\n";
    else
    cout<<"false\n";
}

int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}