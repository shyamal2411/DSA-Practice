#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/binary-tree-right-side-view/
typedef vector<int> vi;
typedef vector<string> vst;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
       queue<TreeNode*> q;
    vector<int> vec;  // create vector for storing values of nodes

    if (!root)
      return vec;

    q.push(root);  // first push root into the queue.
    while (!q.empty()) {
      vec.push_back(q.back()->val);  // start pushing values from queue to vec
      for (int i = q.size(); i > 0; i--) {
        TreeNode* temp = q.front();
        q.pop();
        if (temp->left)
          q.push(temp->left);
        if (temp->right)
          q.push(temp->right);
      }
    }
    return vec;   
    }
};

class Solution2 {
public:
// Time: O(nodes)
// Space: O(height)
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        help(root, 0, ans);
        return ans;
    }
    
    void help(TreeNode* root, int level, vector<int> &ans){
        if(root == NULL) return;
        
        //Reverse Pre-order traversal.
        if(ans.size() == level) 
            ans.push_back(root->val);
        help(root->right, level+1, ans);
        help(root->left, level+1, ans);
    }
};

int main(){
Solution ss;
TreeNode* root = new TreeNode(1);
root->left = new TreeNode(2);
root->right = new TreeNode(3);
root->left->left = new TreeNode(4);
root->left->right = new TreeNode(5);
root->right->left = new TreeNode(6);
root->right->right = new TreeNode(7);
vector<int> vec = ss.rightSideView(root);
for(int i = 0; i < vec.size(); i++){
    cout << vec[i] << " ";
}
cout << endl;

return 0;
}