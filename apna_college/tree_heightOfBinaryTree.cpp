#include <bits/stdc++.h>
using namespace std;
class node {
 public:
  int data;
  node* left;
  node* right;
};

int height(node* node) {
  if (node == NULL)
    return 0;
  else {
    int Ldepth = height(node->left);
    int Rdepth = height(node->right);
    if (Ldepth > Rdepth)
      return (Ldepth + 1);
    else
      return (Rdepth + 1);
  }
}

node* insertnode(int data) {
  node* Node = new node();
  Node->data = data;
  Node->left = NULL;
  Node->right = NULL;
  return (Node);
}

int main() {
  node *root = insertnode(4);
  root->left = insertnode(8);
  root->right = insertnode(1);
  root->left->left = insertnode(9);
  cout << "Height of the given Binary Tree is: " << height(root);

  return 0;
}