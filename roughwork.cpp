class Solution {
 public:
  void printleft(TreeNode* root, vector<int>& ans) {
    if (!root)
      return;

    ans.push_back(root->val);
    if (!root->left)
    printleft(root->right,ans);

    else {
    printleft(root->left,ans);
    printleaf(root->right,ans);}
  }

void printright(TreeNode* root, vector<int>& ans)
{
    if(!root)
    return;

    if(!root->right)
    printright(rroot->left,ans);

    else{
    printleaf(root->left,ans);
    printright(root->right,ans);}

    ans.push_back(root->val);
}

void printleaf(TreeNode* root, vector<int>& ans)
{
    if(!root)
    return;
    if(!root->left && !root->right)
    ans.push_back(root->val);
    
    printleaf(root->left,ans);
    printleaf(root->right,ans);

}


  vector<int> boundaryOfBinaryTree(TreeNode* root) {
    vector<int> ans;
    if (!root)
      return ans;

    ans.push_back(root->val);
    printleft(root->left,
              ans);  // call the function for traversing the left part of binary
                     // tree and store the nodes in ans vector
    printright(root->right, ans);  // same for the right side, traverse and
                                   // store the nodes in vector
    return ans;
  }
}