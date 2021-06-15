#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

struct Node {
  int data;
  Node *left, *right;
};

Node* getNode(int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));

  newNode->data = data;
  newNode->left = newNode->right = NULL;
}

int countPairs(Node* root1, Node* root2, int x) {
  if (root1 == NULL || root2 == NULL)
    return 0;

  stack<Node*> st1, st2;
  Node *top1, *top2;

  int count = 0;

  while (1) {
    while (root1 != NULL) {
      st1.push(root1);
      root1 = root1->left;
    }

    while (root2 != NULL) {
      st2.push(root2);
      root2 = root2->right;
    }

    if (st1.empty() || st2.empty())
      break;

    top1 = st1.top();
    top2 = st2.top();

    if ((top1->data + top2->data) == x) {
      count++;
      st1.pop();
      st2.pop();

      root1 = top1->right;
      root2 = top2->left;
    } else if ((top1->data + top2->data) < x) {
      st1.pop();
      root1 = top1->right;
    } else {
      st2.pop();
      root2 = top1->left;
    }
  }
  return count;
}

int main() {
  // main function copied to not waste time.
  // formation of BST 1
  Node* root1 = getNode(5);        /*             5        */
  root1->left = getNode(3);        /*           /   \      */
  root1->right = getNode(7);       /*         3     7     */
  root1->left->left = getNode(2);  /*        / \   / \    */
  root1->left->right = getNode(4); /*       2  4  6  8    */
  root1->right->left = getNode(6);
  root1->right->right = getNode(8);

  // formation of BST 2
  Node* root2 = getNode(10);       /*           10         */
  root2->left = getNode(6);        /*         /   \        */
  root2->right = getNode(15);      /*        6     15      */
  root2->left->left = getNode(3);  /*       / \   /  \     */
  root2->left->right = getNode(8); /*      3  8  11  18    */
  root2->right->left = getNode(11);
  root2->right->right = getNode(18);

  int x = 16;
  cout << "Pairs = " << countPairs(root1, root2, x);
  return 0;
}