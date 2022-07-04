#include<bits/stdc++.h> 
using namespace std;

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
vector<vi> ans;

    int getHeight(TreeNode* root){
        if(root == NULL)
            return -1;
        int leftH = getHeight(root->left);
        int rightH = getHeight(root->right);

        int currHeight = max(leftH, rightH) + 1;

        if(ans.size() == currHeight)
            ans.push_back({});

        ans[currHeight].push_back(root->val);
        return currHeight;
    }

    vector<vi> findLeaves(TreeNode* root){
        getHeight(root);
        return ans;
    }
};

int main(){
Solution ss;
// vector<int> vec = {};
return 0;
}