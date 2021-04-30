#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack {
  int top;

 public:
  int a[MAX];

  Stack() { top = -1; }
  bool push(int x);
  int pop();
  int peek();
  bool isEmpty();
};

bool Stack::push(int x) {
  if (top >= (MAX - 1)) {
    cout << "Stack Overflow";
    return false;
  } else {
    a[++top] = x;
    cout << x << " pushed into stack\n";
    return true;
  }
}

int Stack::pop() {
  if (top < 0) {
    cout << "Underflow";
    return 0;
  } else {
    int x = a[top--];
    return x;
  }
}
int Stack::peek() {
  if (top < 0) {
    cout << "Empty";
    return 0;
  } else {
    int x = a[top];
    return x;
  }
}

bool Stack::isEmpty() {
  return (top < 0);
}

int main() {
  class Stack s;
  s.push(11);
  s.push(12);
  s.push(13);
  cout << s.pop() << " Popped" << endl;

  while (!s.isEmpty()) {
    cout << s.peek() << " ";
    s.pop();
  }
  return 0;
}
