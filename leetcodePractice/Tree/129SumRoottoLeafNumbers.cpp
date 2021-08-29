
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;
        sum=0;
        dfs(root, 0);
    return sum;
    }
    
    void dfs(TreeNode *&node, int curSum){
        curSum=curSum*10 + node->val;
        
        //this if condition is necessary, as it checks leaf 
        //and adds only the leaves
        if(!node->left && !node->right)
        sum+=curSum;
        
        if(node->left)
            dfs(node->left, curSum);
        if(node->right)
            dfs(node->right, curSum);
    }
    private:
    int sum;
};