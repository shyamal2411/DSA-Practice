#include <bits/stdc++.h>
using namespace std;
stack<char> st;
string ns;
//! DO AGAIN!
char insertBottom(char x) {
  if (st.size() == 0)
    st.push(x);  // base condition

  else {
    char topelement = st.top();
    st.pop();
    insertBottom(x);
    st.push(topelement);
  }
}

char reverse() {
  if (st.size() > 0) {
    char x = st.top();
    st.pop();
    reverse();
    insertBottom(x);
  }
}

int main() {
  st.push('S');
  st.push('H');
  st.push('Y');
  st.push('A');
  st.push('M');
  st.push('A');
  st.push('L');

  reverse();
  while (!st.empty()) {
    char p = st.top();
    st.pop();
    ns += p;
  }
  cout << ns[6] << " " << ns[5] << " " << ns[4] << " " << ns[3] << " " << ns[2]
       << " " << ns[1] << " " << ns[0] << " ";
  return 0;
}