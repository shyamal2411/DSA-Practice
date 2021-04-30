#include <bits/stdc++.h>
using namespace std;

class SortedStack {
 public:
  stack<int> s;
  void sort();
};

void printStack(stack<int> s) {
  while (!s.empty()) {
    printf("%d ", s.top());
    s.pop();  // LL ma p=p->next hoy but stack ma to element kaadho tyare j
              // niche no element male atle pop karvu pde
  }
  printf("\n");
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    SortedStack* ss = new SortedStack();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      int k;
      cin >> k;
      ss->s.push(k);
    }
    ss->sort();
    printStack(ss->s);
  }
}

/*The structure of the class is
class SortedStack{
public:
        stack<int> s;
        void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack ::sort() {
  stack<int> st;
  while (!s.empty()) {
    int temp = s.top();
    s.pop();
    while (!st.empty() && st.top() > temp) {
      int x = st.top();
      st.pop();
      s.push(x);
    }
    st.push(temp);
  }
  s = st;
}