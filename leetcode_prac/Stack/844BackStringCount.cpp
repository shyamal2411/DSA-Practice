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
  string help(string s) {
    stack<char> stk;

    for (auto it : s) {
      // if char is anything except #, push it in stack, else pop ele from stack
      if (it != '#')
        stk.push(it);
      else if (!stk.empty())
        stk.pop();
    }
    string ans = "";
    
    // stores the final string after all the backspace operation.
    while (!stk.empty()) {
      ans.push_back(stk.top());
      stk.pop();
    }
    return ans;
  }

  bool backspaceCompare(string s, string t) { return help(s) == help(t); }
};

void solve(){
int n,k;
string s,t;
in s>>t;
 Solution ss;
 if (ss.backspaceCompare(s,t))
   cout << "true\n";
 else
   cout << "false\n";
}

int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}
/*
INPUT:
4
ab#c ad#c
ab## c#d#
a##c a#c
a#c b
OUTPUT:
true
true
true
false
*/