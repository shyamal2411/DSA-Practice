#include<bits/stdc++.h> 
using namespace std;
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
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
    int numberOfSteps(int num) {
       int count=0;
        
        while(num){
            if(num&1)//odd
                num--;
            else //even
                num>>=1; //num=num/2;
            count++;
        }
        return count;
    }
};

void solve(){
int n,k;
in n;
  Solution ss;
  cout<<ss.numberOfSteps(n) <<nl;
}

int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}