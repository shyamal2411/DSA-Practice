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
  bool isValid(string s) {
    stack<char> st;  // to keep track of brackets
    for (char c : s) {
      if (st.empty() || c == '(' || c == '{' || c == '[')
        st.push(c);

      else {
        if ((c == ')' && st.top() != '(') || (c == ']' && st.top() != '[') ||
            (c == '}' && st.top() != '{'))
          return false;
        st.pop();
        // if control reaches to that line, it means we have got the right pair
        // of brackets, so just pop it.
      }
    }
    return st.empty();
    // at last, it may possible that we left something into the stack unpair so
    // return checking stack is empty or not..
  }
};

void solve(){
int n,k;
string s;
cin>>s;
 Solution ss;
 if (ss.isValid(s))
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