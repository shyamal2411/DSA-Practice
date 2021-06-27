#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

bool isPalindrome(string s) {
  int i = 0, j = 0;
  for (i = 0, j = s.size() - 1; i < j; i++, j--) {
    while (isalnum(s[i]) == false && i < j)
      i++;
    while (isalnum(s[j]) == false && i < j)
      j--;
    if (toupper(s[i]) != toupper(s[j]))
      return false;
  }
  return true;
}

void solve() {
  string s;
  cin >> s;
  isPalindrome(s);

  if (isPalindrome(s))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int32_t main() {
  int t;
  t = 1;
  in t;
  while (t--)
    solve();

  return 0;
}
/*
in for loop, first move 2 pointers from opposite direction until they collide.
increment left pointer, if not alphanumeric -isalnum stands for is alphanumeric
similarly, decrement right pointer if not alphanumeric
exit the moment they don't match.
*/