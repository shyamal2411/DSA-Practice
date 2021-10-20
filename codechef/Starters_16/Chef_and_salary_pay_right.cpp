#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

int streax(string s) {
    int maxx=0;
    int i=0;
    while(i<s.size())
    {
        int ones=0;
        while(i< s.size() && s[i]==1)
        {
            ones++;
            i++;
        }
        maxx=max(maxx,ones);
        i++;
    }
    return maxx; 
}
 
void solve(){
  int x,y;
  cin>>x>>y;
  string s;
  cin>>s;
  int ones =0,res=0;
  int max = INT_MIN;
  for(int i=0;i<s.size();++i){
    if(s[i]=='1'){
        ones++;
      }
  }
 
    for(int i=0;i<s.size();++i){
 
      int j=i+1,count=1;
      while(s[i]=='1' && s[j]=='1'){
        i++;
        j++;
        count++;
      }
    if(count>max){
      max = count;
    }
 
  }
 
  res = ones*x + (max*y);
 
  cout<<res<<endl;
 
}



int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}