#include <bits/stdc++.h>
using namespace std;

struct node {
  struct node* left;
  int data;
  struct node* right;
};
//! CREATE NODE
struct node* createnode(int val) {
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data = val;
  temp->right = NULL;
  temp->left = NULL;
  // temp->left=temp->right=NULL;
};
//! PREORDER FUNCTION
void preorder(struct node* root) {
  if (root != NULL) {
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
  }
}
//! NODE INSERTION
struct node* insertnode(struct node* node, int val) {
  if (node == NULL)
    return createnode(val);

  if (val < node->data)
    node->left = insertnode(node->left, val);

  else if (val > node->data)
    node->right = insertnode(node->right, val);

  return node;
}

int main() {
  struct node* root = NULL;
  root = insertnode(root, 4);
  insertnode(root, 5);
  insertnode(root, 1);
  insertnode(root, 2);
  insertnode(root, 3);
  insertnode(root, 7);
  insertnode(root, 9);
  
  cout << "Pre-Order traversal of the Binary Search Tree is: ";
  preorder(root);
  
  return 0;
}