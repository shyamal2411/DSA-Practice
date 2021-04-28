// Basic Structure of Binary tree.

#include <bits/stdc++.h>
using namespace std;

struct Node {
  int key;
  Node* left;
  Node* right;

  Node(int k) {
    key = k;
    left = right = NULL;
  }
};

void inorder(Node* root) {
  if (root != NULL) {
    inorder(root->left);
    cout << (root->key) << " ";
    inorder(root->right);
  }  // Time complexity: O(n)
}

void preorder(Node* root) {
  if (root != NULL) {
    cout << (root->key) << " ";
    preorder(root->left);
    preorder(root->right);
  }
}

void postorder(Node* root) {
  if (root != NULL) {
    postorder(root->left);
    postorder(root->right);
    cout << (root->key) << " ";
  }
}

int getSize(Node* root) {
  if (root == NULL)
    return 0;  // if no root means no tree so return 0.

  else
    return 1 + getSize(root->left) + getSize(root->right);
  // Time complexity: O(n)
  // Auxilary Space: O(h)  (Actually h+1, but we ignore h) h is height of binary tree.
}

int maxSize(Node *root)
{
    if(root==NULL)
    return 0;

    int count=0;
}

int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);

  return 0;
}