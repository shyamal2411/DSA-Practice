#include <bits/stdc++.h>
using namespace std;

struct node {
  char d;
  node* left;
  node* right;
};

char pf[50];
int top = -1;
node* a[50];

int right(char inch)  //* checking if the symbol is operator or operand
{
  if (inch == '+' || inch == '-' || inch == '*' ||
      inch == '/')  // checking for all 4 basic functions.
    return -1;

  else if (inch >= 'A' || inch < 'Z')
    return 1; //return true;

  else if (inch >= 'a' || inch <= 'z')
    return 1; //return true;

  else
    return false;  // return (-100);
}

void push(node* tree) {
  top++;
  a[top] = tree;
}

node* pop() {
  top--;
  return (a[top + 1]);
}

void construct_tree(char* suffix) {
  char s;
  node *newl, *p1, *p2;
  int flag;
  s = suffix[0];
  for (int i = 1; s != 0; i++) {
    flag = right(s);
    if (flag == 1) {
      newl = new node;
      newl->d = s;
      newl->left = NULL;
      newl->right = NULL;
      push(newl);
    } else {
      p1 = pop();
      p2 = pop();
      newl = new node;
      newl->d = s;
      newl->left = p2;
      newl->right = p1;
      push(newl);
    }
    s = suffix[i];
  }
}

void inOrder(node* tree)  // InOrder Traversal.
{
  if (tree != NULL) {
    inOrder(tree->left);
    cout << tree->d;
    inOrder(tree->right);
  }
}

int main() {
 // cout << "Enter Postfix Expression: ";
  cin >> pf;
  construct_tree(pf);
  cout << "\nInfix Expression: ";
  inOrder(a[0]);
  return 0;
}