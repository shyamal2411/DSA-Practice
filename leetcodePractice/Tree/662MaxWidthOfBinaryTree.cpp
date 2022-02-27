#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/maximum-width-of-binary-tree/
// https://leetcode.com/problems/maximum-width-of-binary-tree/discuss/1803302/C%2B%2Bor-Detailed-Explanation-w-WHY-oror-Covering-Integer-overflow-conditionor-DRY-RUN
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
    int widthOfBinaryTree(TreeNode* root) {
       if(root == NULL)  
            return 0;   
        
        int ans = 0; 
        
        // level order traveral
        queue<pair<TreeNode*, int>> q; // pair contain { node, index}
        
        q.push({root, 1}); // push root node 
        
        // BFS
        while(q.empty() == false)
        {
            int size = q.size(); 
            
            int minAtLevel = q.front().second; // minimum index at particular level
            int mn, mx;
            
            for(int i= 0; i < size; i++)
            {
                // changes index of level by decreasing minimum index
                int curr_index = q.front().second - minAtLevel + 1; //+ 1 because we are using 1 based indexing,
                
                // take out current node
                TreeNode* node = q.front().first;
                q.pop(); // pop from the queue
                //width = (maximum index at level) - (minimum index at level) + 1
                if(i == 0) 
                    mn = curr_index; // minimum index at level
                
                if(i == size - 1)
                    mx = curr_index; //maximum index at level
                				
                if(node -> left != NULL) //2 * i
                    q.push({node -> left, 2LL * curr_index});
                
                if(node -> right != NULL) //2 * i  + 1
                    q.push({node -> right, 2LL * curr_index + 1});
                   
            }
            ans = max(ans, mx - mn + 1);
            }
        return ans;
    }
};

int main(){
    Solution ss;

}