#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

struct Node {
  int data;
  Node *left, *right;
  Node(int val) {
    data = val;
    left = right = NULL;
  }
};

void LeftviewBT(Node* root) {
  if (root == NULL)
    return;
  queue<Node*> q;
  q.push(root);
  while (!q.empty()) {
    int n = q.size();
    for (int i = 1; i <= n; i++) {
      Node* temp = q.front();
      q.pop();

      if (i == 1) {
        cout << temp->data << " ";
      }
      if (temp->left != NULL)
        q.push(temp->left);

      if (temp->right != NULL)
        q.push(temp->right);
    }
  }
}

int main() {
  Node* root = new Node(5);
  root->left = new Node(3);
  root->right = new Node(6);
  root->left->left = new Node(2);
  root->left->right = new Node(4);

  LeftviewBT(root);
  cout << endl;
  return 0;
}