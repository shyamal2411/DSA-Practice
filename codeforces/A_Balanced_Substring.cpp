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

    void solve(){
    int n,k,i,p,q,r,count=0,j,flag,ans=0;
    cin>>n;
    string s;
    int ans1=0, ans2=0;
    cin>>s;
    if(s.size()<=2){
    cout<<-1<<-1<<endl;}

    for(i=1;i<=s.size();i++){
        if(s[i]=='a'){ans1++;}
        if(s[i]=='b'){ans2++;}
    }
    if(ans1==ans2)
    cout<<1<<" "<< s.size()-1<<" "<<endl;
    }

void solve2(){
    int n; cin>>n;
    string s; cin>>s;

    f(i,0,s.size()){
        int ans1=0, ans2=0;

        f(j, i, s.size()){
            if(s[i]=='a'){ans1++;}
            if(s[i]=='b'){ans2++;}

            if(ans1==ans2){
                cout<<i<<" "<<j<<" "<<endl;
                return;
        }
    }
}
    cout<<-1<<" "<<-1<<" "<<nl;
}

    int32_t main(){
        FIO int t; t=1;
        in t;
        while(t--) solve2();

    return 0;
    }