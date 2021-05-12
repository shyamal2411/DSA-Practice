// RECURSION APPROACH
int maxnode(Node* root) {
  if (!root)
    return 0;

  int ans = root->data;
  int lans = maxnode(root->left);
  int rans = maxnode(root->right);

  if (lans > ans)
    lans = ans;

  if (rans > ans)
    rans = ans;

  return ans;
}

// ITERATIVE APPROACH
int FindMaxUsingLevelOrder(struct Node* root) {
  struct Node* temp;
  int max = INT_MIN;
  struct Queue* Q = CreateQueue();
  EnQueue(Q, root);

  while (!isEmptyQueue(Q)) {
    temp = DeQueue(Q);
    // largest of the Three Values
    if (max < temp->data)
      max = temp->data;
    if (temp->left)
      EnQueue(Q, temp->left);
    if (temp->right)
      EnQueue(Q, temp->right);
  }
  DeleteQueue(Q);
  return max;
}