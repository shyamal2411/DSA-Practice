#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
const int M=1e5 + 5;
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

void PROBCAT(){
 int x; cin>>x;
 if(x >= 1 && x < 100){
     cout<<"Easy\n"; return;
 }
 
 if(x >= 100 && x < 200){
     cout<<"Medium\n"; return;
 }
 if(x >= 200 && x <= 300){
     cout<<"Hard\n"; return;
 }

}

void CHFSPL(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c - min(a, min(b,c))<<endl;
    // int ans = 0;
    // if(a+b > ans)
    // ans = a+b; 
    // else if(a+c > ans)
    // ans = a+c;
    // else if(b+c > ans)
    // ans = b+c;
    // cout<<ans<<endl;
}

void SMOL(){
    int n, k; cin>>n>>k;
    if(k == 0)
    cout<<n<<endl;
    else
    cout<<n%k<<endl;
}

void WEIGHTBL(){
    int w1, w2, x1, x2, m;
    cin>>w1>>w2>>x1>>x2>>m;
    int ans = m * (w2-w1);
    if(x2-x1 > ans || x2 - x1 < ans)
    cout<<"0\n";
    else
    cout<<"1\n"<<endl;
}

void WEIGHTBL2(){
    int w1, w2, x1, x2, m;
    cin>>w1>>w2>>x1>>x2>>m;
    
    int min1 = w1 + (x1 * m);
    int min2 = w1 + (x2 * m);

    if(min1 <= w2 && min2 >= w2)
    cout<<"1\n";
    else
    cout<<"0\n";
}

void CSTOCK(){
    double s,a,b,c, per = 0;
    cin>>s>>a>>b>>c;
    s=s+(s*c)/100.00;
	if(s>=a && s<=b)
    cout<<"Yes\n";
    else
    cout<<"No\n";
}

void MXEVNSUB(){
    int n; cin>>n;
    int sum = (n * (n + 1)) / 2;
    if(sum % 2)
    cout<<n - 1<<endl;
    else
    cout<<n<<endl;
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) MXEVNSUB();
  
return 0;
}