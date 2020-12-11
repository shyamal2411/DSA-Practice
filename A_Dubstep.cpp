#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,count=0,j;
    
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
        i += 2; //jo WUB aviyu to next 2 vaar loop iterate karvani jaroor j nthi direct skip those 2 iterations
        if (!count) {   //jo count 0 na hoy to space apvani-for test case 2 
          cout <<" ";
        }
        continue;
      } else {
        count = 0; // set count again on 0 to not let print space before the first letter
        cout << s[i];  // jo WUB na hoy to character print karavo ne again loop chalavo
      }//again check if there is WUB
    }
return 0;
}