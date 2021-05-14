// question is not on leetcode, finding
// code may not be correct synataxially

void getInorder(BSTNode root, vector<int>& A) {
  if (root == NULL)
    return getInorder(root->left, A);

  A.push_back(root->data);
  getInorder(root->right, A)
}

int KthLargestBST(BSTNode root, int K) {
  if (root == NULL)
    return -1;
  vector<int> A;
  getInorder(root, A);
  int count = 1;
  int index = A.size() - 1;
  while (count < K) {
    index = index - 1;
    count = count + 1;
  }
  return A[index];
}

// REVERSE INORDER TRAVERSAL

// class BSTNode {
//   int data;
//     BSTNode right;
//     BSTNode left;
//     int rightCount;
// }
// int KthLargestBST(BSTNode root, int K, int& count) {
//   if (root == NULL || count >= K)
//     return -1;
//      KthLargestBST(root->right, K, count);
//       count = count + 1;
//        if (count == K)
//         return root->data;
//          KthLargestBST(root->left, K, count);
// }