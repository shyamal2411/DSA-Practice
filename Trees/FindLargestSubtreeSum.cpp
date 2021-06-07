// https://www.geeksforgeeks.org/find-largest-subtree-sum-tree/

// very easy approach but tricky question!!!
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int key;
  Node *left, *right;
};

Node* newNode(int key) {
  Node* temp = new Node;
  temp->key = key;
  temp->left = temp->right = NULL;
  return temp;
}

int util(Node* root, int& ans) {
  if (!root)
    return 0;
  int currentsum = root->key + util(root->left, ans) + util(root->right, ans);
  ans = max(ans, currentsum);
  return currentsum;
}

int findLargestSubtreeSum(Node* root) {
  if (!root)
    return 0;
  int ans = INT_MIN;
  util(root, ans);
  return ans;
}

int main() {
  /*
                  1
                  / \
                 /	 \
                -2	 3
                / \	 / \
                / \ /   \
               4  5 -6	 2
        */

  Node* root = newNode(1);
  root->left = newNode(-2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(-6);
  root->right->right = newNode(2);

  cout << findLargestSubtreeSum(root);
  return 0;
}
