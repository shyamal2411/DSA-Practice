// C++ program to convert a tree into its sum tree

//DRIVER CODE COPIED, FUNCTION WRITTEN BY MY OWN
#include <bits/stdc++.h>
using namespace std;

class node {
 public:
  int data;
  node* left;
  node* right;
};

int toSumTree(node* Node) {
  if (Node == NULL)
    return 0;

  int old_val = Node->data;
  Node->data = toSumTree(Node->left) + toSumTree(Node->right);
  return Node->data + old_val;
}
void printInorder(node* Node) {
  if (Node == NULL)
    return;
  printInorder(Node->left);
  cout << " " << Node->data;
  printInorder(Node->right);
}


node* newNode(int data) {
  node* temp = new node;
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;

  return temp;
}


int main() {
  node* root = NULL;
  int x;

  root = newNode(10);
  root->left = newNode(-2);
  root->right = newNode(6);
  root->left->left = newNode(8);
  root->left->right = newNode(-4);
  root->right->left = newNode(7);
  root->right->right = newNode(5);

  toSumTree(root);

  cout << "Inorder Traversal of the resultant tree is: \n";
  printInorder(root);
  return 0;
}

