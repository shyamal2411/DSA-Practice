// From:
// https://www.codingninjas.com/blog/2020/11/04/converting-binary-tree-to-binary-search-tree/
#include <bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node* left;
  struct node* right;
};

// Structure for creating new node.
struct node* newNode(int val) {
  struct node* newnode = new node();
  newnode->data = val;
  newnode->left = newnode->right = NULL;
  return newnode;
}

bool checkBST(node* root, node* left, node* right) {
  if (root == NULL)
    return true;
  if (left && root->data <= left->data)
    return false;
  if (right && root->data >= right->data)
    return false;
  return checkBST(root->left, left, root) && checkBST(root->right, root, right);
}

void convertBST(node* root, vector<int> InOrderArray, int& i) {
  
  if (root) {
    convertBST(root->left, InOrderArray, i);
    root->data = InOrderArray[i++];
    convertBST(root->right, InOrderArray, i);
  }
}

void InOrder(struct node* root, vector<int>& v) {
  if (root) {
    // cout<<root->data<<" ";
    InOrder(root->left, v);
    v.push_back(root->data);  // inorder
    InOrder(root->right, v);
  }
}
void traverse(node* root) {
  if (root) {
    traverse(root->left);
    cout << root->data << " ";
    traverse(root->right);
  }
}
int main() {
  struct node* root = newNode(4);
  root->left = newNode(2);
  root->right = newNode(0);
  root->left->right = newNode(3);
  root->left->left = newNode(1);
  // traverse(root);
  // cout<<checkBST(root,NULL,NULL);
  // Check this condition before moving forward
  // I have considered that the tree is not given in BST
  vector<int> arr;
  InOrder(root, arr);
  int n = arr.size();
  sort(arr.begin(), arr.end());
  for (auto e : arr)
    cout << e << " ";
  cout << endl;
  traverse(root);
  cout << endl;
  int i = 0;
  convertBST(root, arr, i);
  traverse(root);
  return 0;
}

/*
Output of the above result is –
0 1 2 3 4 //sorted InOrderArray
1 2 3 4 0 //Tree before conversion
0 1 2 3 4 //Tree after conversion
*/