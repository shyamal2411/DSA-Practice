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
  }  // Time complexity: O(n)
}

void postorder(Node* root) {
  if (root != NULL) {
    postorder(root->left);
    postorder(root->right);
    cout << (root->key) << " ";
  }  // Time complexity: O(n)
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
    return INT_MIN;

   else
    return max(root->key,max(maxSize(root->left),maxSize(root->right)));
}

int height(Node *root)
{
    if(root==NULL)
    return 0;

    else
    return max(height(root->left),height(root->right))+1;
}

void iterative_Inorder(Node *root) //unable to understand the working of the code. 
{
  stack<Node*> st;
  Node *curr=root;//initially current is at root.
  while(curr!=NULL||st.empty()==false)
  {
    while(curr!=NULL)
    {
      st.push(curr);
      curr=curr->left;
    }
    curr=st.top(); st.pop();
    cout<<(curr->key)<<" ";
    curr=curr->right;
  }
}


void iterative_Preorder(Node *root)
{
  if(root==NULL) return;

  stack<Node*> st;
  st.push(root);
  while(st.empty()==false)
  {
    Node *curr=st.top();
    cout<<(curr->key)<<" ";
    st.pop();

    if(curr->right!=NULL)
    st.push(curr->right);
    
    if(curr->left!=NULL)
    st.push(curr->left);
  }
} 

//Optimal solution for preorder traversal.
void iterative_Preorder_Opt(Node *root)
{
if(root==NULL) return;

stack<Node*> st;
Node *curr=root;

while(curr!=NULL || st.empty()==false)
{
  while(curr!=NULL)
  {
    cout<<(curr->key)<<" ";
    if(curr->right!=NULL)
    st.push(curr->right);
  }
  curr=curr->left;
  if(st.empty()==false)
  {curr=st.top(); st.pop();}
}
}


int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);

  return 0;
}