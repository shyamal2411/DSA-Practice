#include <bits/stdc++.h>
using namespace std;

// reverse Stack using recursion
stack<char> st;
string ns;

char insertBottom(char x)
{
  if (st.size() == 0)
    st.push(x);
  else
  {

    char a = st.top();
    st.pop();
    insertBottom(x);
    st.push(a);
  }
}

char reverse()
{
  if (st.size() > 0)
  {
    char x = st.top();
    st.pop();
    reverse();

    insertBottom(x);
  }
}


int main()
{
  st.push('1');
  st.push('2');
  st.push('3');
  st.push('4');

  reverse();

  while (!st.empty())
  {
    char p = st.top();
    st.pop();
    ns += p;
  }
  cout << ns[3] << " " << ns[2] << " " << ns[1] << " " << ns[0] << endl;
  return 0;
}