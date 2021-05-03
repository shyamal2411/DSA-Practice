#include <bits/stdc++.h>
using namespace std;

struct Node {
  char data;
  Node* left;
  Node* right;
};

void levelorder(Node* root) {
  if (root == NULL)
    return;
  queue<Node*> q;
  q.push(root);
  // while there is at least one discovered node
  while (!q.empty()) {
    Node* current = q.front();
    q.pop();  // removing the element at front
    cout << current->data << " ";
    if (current->left != NULL)
      q.push(current->left);
    if (current->right != NULL)
      q.push(current->right);
  }
}
  /*TIME-COMPLEXITY: O(N)
  SPACE COMPLEXITY: O(1)- Best casebecause if depends on number of nodes present
  on level at this time. O(N) -Avg, Worst for trees like binary tree.
  */

Node* insert(Node* root, char data) {
  if (root == NULL) {
    root = new Node();
    root->data = data;
    root->left = root->right = NULL;
  } else if (data <= root->data)
    root->left = insert(root->left, data);
  else
    root->right = insert(root->right, data);
  return root;
}

int main() {
  Node* root = NULL;
  root = insert(root, 'M');
  root = insert(root, 'B');
  root = insert(root, 'q');
  root = insert(root, 'Z');
  root = insert(root, 'A');
  root = insert(root, 'C');
  // Print Nodes in Level Order.
  levelorder(root);
}
