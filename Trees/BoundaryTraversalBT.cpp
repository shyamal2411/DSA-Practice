/* boundary traversal of a binary tree:
https://www.geeksforgeeks.org/boundary-traversal-of-binary-tree/ */
#include <bits/stdc++.h>
using namespace std;
#define nl " "
struct node {
  int data;
  struct node *left, *right;
};

struct node* newNode(int data) {
  struct node* temp = (struct node*)malloc(sizeof(struct node));

  temp->data = data;
  temp->left = temp->right = NULL;

  return temp;
}

void printboundaryleft(struct node* root) {
  if (!root)
    return;
  if (root->left) {
    cout << root->data << nl;
    printboundaryleft(root->left);
  } else if (root->right) {
    cout << root->data << nl;
    printboundaryleft(root->right);
  }
}

void printboundaryright(struct node* root) {
  if (!root)
    return;
  if (root->right) {
    cout << root->data<<nl;
    printboundaryright(root->right);
  } else if (root->left) {
    cout << root->data << nl;
    printboundaryright(root->right);
  }
}
void printleaves(struct node* root) {
  if (root == NULL)
    return;
  printleaves(root->left);
  if ((!root->left) and !(root->right))
    cout << root->data << nl;
  printleaves(root->right);
}

void printboundary(struct node* root) {
  if (!root)
    return;
  cout << root->data << nl;
  printboundaryleft(root->left);
  printleaves(root->left);
  printleaves(root->right);
  printboundaryright(root->right);
}

int main() {
  struct node* root = newNode(20);
  root->left = newNode(8);
  root->left->left = newNode(4);
  root->left->right = newNode(12);
  root->left->right->left = newNode(10);
  root->left->right->right = newNode(14);
  root->right = newNode(22);
  root->right->right = newNode(25);

  printboundary(root);
  // output:20 8 4 10 14 25 22
  return 0;
}
