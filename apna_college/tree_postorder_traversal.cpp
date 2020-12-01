#include <bits/stdc++.h>
using namespace std;
//* REFERENCE: APNA COLLEGE
struct node {
  int data;
  struct node* left; //same as linkedlist
  strut node* right;
};
//! CREATE NODE
//* SAME AS PREORDER
struct node* createnode(int val) {
  struct node* temp = new struct node;
  temp->data = val;
  temp->left = temp->right = NULL;
  return temp;
}

void postorder(struct node* root) {
  if (root != NULL) {
    postorder(root->left);  // following the rule of postorder
    postorder(root->right);
    cout << root->data <<" ";
  }
}

struct node* insertnode(struct node* node, int val) {
  if (node == NULL)
    return createnode(val);

  if (val < node->data)
    node->left = insertnode(node->left, val);

  else if (val > node->data)
    node > right = insertnode(node->right, val);
  return node;
}

int main() {
  struct node* root = NULL;
  root = insertnode(root, 4);
  insertnode(root, 5);
  insertnode(root, 1);
  insertnode(root, 9);
  insertnode(root, 8);
  insertnode(root, 7);
  insertnode(root, 6);
  cout << "Post-Order traversal of the Binary Search Tree is: ";
  postorder(root);

  return 0;
}