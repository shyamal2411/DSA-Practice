#include<bits/stdc++.h> 
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
 
#define int long long 
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define in cin>>
#define out cout<<
#define fr first
#define sc second
#define VC vector<int>
#define VP vector<pair<int,int>>
#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626433832
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
 
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int fact(int n){int res = 1;for (int i = 2; i <= n; i++)res = res * i;return res;}
int nCr(int n, int r){return fact(n) / (fact(r) * fact(n - r));}
 
 
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif // ONLINE_JUDGE
}
 
int gcd(int a, int b){
    if (b == 0){return a;}
    else{return gcd(b,a%b);}
}
 
int lcm(int a, int b){
    return (a*b)/(gcd(a,b));
}
 
 
void solve(){
     string str;
     getline(cin,str);
     for(auto &itr:str){
          itr=tolower(itr);
     }

     string s;
     getline(cin,s);

     for(auto &itr:s){
          itr=tolower(itr);
     }
     unordered_map<char,int> m;
     
     for(auto itr:str){
          if(itr==' '){continue;}
          m[itr]++;
     }

     // for(auto itr:m){
     //      cout<<itr.fr<<" "<<itr.sc<<"\n";
     // }

     // cout<<"\n\n\n\n";

     // cout<<s<<"\n";   

     bool flag=true;
     for(auto itr:m){
          if(itr.sc!=1){
               cout<<"New Language Error";
               flag=false;
               break;
          }
     }

     if(flag){
          vector<unordered_map<char,int>> vec;
          unordered_map<char,int> temp;

          for(auto itr:s){
               if(m.find(itr)!=m.end()){
                    temp[itr]++;
               }
               else if(itr==' '){
                    // for(auto itr:temp){
                    //      cout<<itr.fr<<" "<<itr.sc<<"\n";
                    // }

                    // cout<<"\n\n\n\n";
                    if(temp.size()==0){continue;}
                    vec.pb(temp);
                    temp.clear();
                    continue;
               }
          }
          vec.pb(temp);

          string ans="";
          string f_ans="";

          for(auto itr:vec){
               for(auto x:str){
                    if(itr.find(x)!=itr.end()){
                         for(int i=0;i<itr[x];i++){
                              f_ans+=x;
                         }
                    }
               }
               ans+=f_ans;
               if(f_ans.size()!=0){ans+=' ';}
               f_ans.clear();
          }
          cout<<ans<<"\n";
     }
}
 
 
int32_t main(){
    cin.tie(0);
    cout.tie(0);
    fast_io;
     
    int t;
    t=1;
//     in t;
    while(t--){
        solve();  
    }    
}