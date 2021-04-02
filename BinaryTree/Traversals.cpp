#include <bits/stdc++.h>
using namespace std;

// PREORDER, INORDER, POSTORDER TRAVERSALS IN BINARY TREE.

struct Node {
  int data;
  struct Node* left;
  struct Node* right;

  Node(int val) {
    data = val;
    right = left = NULL;
  }
};

void preorder(struct Node* root) {
  if (root == NULL)
    return;  // base case

  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void inorder(struct Node* root) {
  if (root == NULL)
    return;  // base case

  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void postorder(struct Node* root) {
  if (root == NULL)
    return;  // base condition

  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

int search(int inorder[], int start, int end, int current) {
  for (int i = start; i < end; i++) {
    if (inorder[i] == current) {
      return i;
    }
  }
  return -1;
}

// Creating Tree
Node* buildTree(int preorder[], int inorder[], int start, int end) {
  static int index = 0;
  if (start > end) {
    return NULL;
  }
  int current = preorder[index];
  index++;
  Node* node = Node(current);
  if (start == end) {
    return node;
  }
  int position = search(inorder, start, end, current);
  node->left = buildTree(preorder, inorder, start, position - 1);
  node->right = buildTree(preorder, inorder, position - 1, end);
  return;
}

int main() {
  int preorder[] = {1, 2, 3, 4, 5};
  int inorder[] = {4, 2, 1, 5, 3};
  Node* root = buildTree(preorder, inorder, 0, 4);
  // struct Node* root = new Node(1);
  // root->left = new Node(2);
  // root->right = new Node(3);
  // root->left->left = new Node(4);
  // root->left->right = new Node(5);
  // root->right->left = new Node(6);
  // root->right->right = new Node(7);

  // preorder(root);
  inorder(root);
  // postorder(root);
  return 0;
}