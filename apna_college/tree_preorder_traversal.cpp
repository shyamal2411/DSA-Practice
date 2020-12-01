#include <bits/stdc++.h>
using namespace std;

struct node {
  struct node* left;
  int data;
  struct node* right;
};
//! CREATE NODE
struct node* createnode(int val) {                                                                                                                                                                                   
  struct node* temp = new struct node;  // use this method to allocate memory.
  // struct node* temp = (struct node*)malloc(sizeof(struct node)); //new node
  // is formed.
  temp->data = val; //same as linkedlist structure
  temp->right = NULL;
  temp->left = NULL;
  // temp->left=temp->right=NULL; //can be written like this too.
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
  if (node == NULL)  // jo akay node na hoy to pela create karo, compiler jaase
                     // createnode function ma
    return createnode(val);

  if (val < node->data)  // if value of the inserted node is less then set it on
                         // the left side.
    node->left = insertnode(node->left, val);  // recurssive call.

  else if (val > node->data)  // if value is greater then set it on righr side.
    node->right = insertnode(node->right,
                             val);  // again recursive call to insert the node.

  return node;
}

int main() {
  struct node* root = NULL;
  root = insertnode(root, 6);
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