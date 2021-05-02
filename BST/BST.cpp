#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node *left, *right;
};

Node* newNode(int key) {
  Node* node = new Node;
  node->data = key;
  node->left = node->right = NULL;

  return node;
}

void inorder(Node* root) {
  if (root == NULL) {
    return;
  }

  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void preorder(struct Node* root) {
  if (root == NULL)
    return;

  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(struct Node* root) {
  if (root == NULL)
    return;

  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

Node* insert(Node* root, int key) {
  if (root == NULL) {
    return newNode(key);
  }

  if (key < root->data) {
    root->left = insert(root->left, key);
  } else {
    root->right = insert(root->right, key);
  }

  return root;
}



int main() {
  int keys[] = {15, 10, 20, 8, 12, 16, 25};

  Node* root = NULL;
  for (int key : keys) {
    root = insert(root, key);
  }
  
  cout << "Preorder:" << endl;
  preorder(root); cout<<endl;
  cout << "Inorder:" << endl;
  inorder(root);cout<<endl;
  cout << "Postorder:" << endl;
  postorder(root);
  cout << endl;
  return 0;
}