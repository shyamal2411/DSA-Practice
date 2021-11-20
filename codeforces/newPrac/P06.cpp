#include<bits/stdc++.h> 
using namespace std;

//P06- Helpful maths
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

void solve(){
//  string s; cin>>s;
//  int n=s.size(), count=0;
//  vi a(n);
 
//     for(int i = 0;i < n; i++){
//         if(s[i]=='0' && s[i]=='9')
//             a.push_back(i);
//             else
//             count++;
//         }

//     cout<<s<<nl;
    int arr[1001];
	string s; cin>>s;
	int count=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='+'){
	        continue;
	    }else{
	        arr[count++]=s[i]-'0';
	    }
	}
	sort(arr,arr+count);
	for(int i=0;i<count;i++){
	    cout<<arr[i];
	    if(i==count-1){
	        break;
	    }
	    cout<<"+";
	}
}

int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) solve();
  
return 0;
}