#include <bits/stdc++.h>
using namespace std;
// The idea is to use recursive calls. We first remove all items one by one,
// then we recur.
// After recursive calls, we push all items back except the middle item.

void deletemid(stack<char>& st, int n, int curr = 0)  // curr is current number.
{
  if (st.empty() || curr == n)
    return;

  int x = st.top();
  st.pop();
  deletemid(st, n, curr + 1);

  if (curr != n / 2)
    st.push(x);
}

int main() {
  stack<char> st;
  st.push('1');
  st.push('2');
  st.push('3');
  st.push('4');
  st.push('5');
  st.push('6');
  st.push('7');
  st.push('8');
  deletemid(st, st.size());
  while (!st.empty()) {
    char p = st.top();
    st.pop();
    cout << p << " ";
  }
  return 0;
}