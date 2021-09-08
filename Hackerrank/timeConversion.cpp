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

string timeConversion(string s) {
    if(s[8]=='A'){
    if(s[0]=='1' && s[1]=='2') // if 12 vagya hoy to 0 ane 1 index ma 00 kari 2 thi 6 index m ni m print karavi dyo means, AM-PM sivay atle 2 to 6
    return "00"+s.substr(2,6);
    
    return s.substr(0,8); //baaki akhi string
    } else {
        int clock =stoi (s.substr(0,2))+12; // avu na hoy to first 2 index ma 12 plus karo stoi kari ne - matlab string ne int ma convert kari ne
        if(clock==24){
            return "12" +s.substr(2,6); 
        }
        return to_string(clock)+s.substr(2,6);
    }
}

int32_t main(){
    FIO int t; t=1;
    //in t;
    string s;
    cin>>s;
    while(t--) {cout<<timeConversion(s)<<endl;}
return 0;
}