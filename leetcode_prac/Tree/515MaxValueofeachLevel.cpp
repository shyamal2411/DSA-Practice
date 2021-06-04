class Solution {
 public:
  vector<int> largestValues(TreeNode* root) {
    if (!root)
      return {};
    vector<int> ans;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      int size = q.size();
      int maxVal = INT_MIN;
      for (int i = 0; i < size; i++) {
        TreeNode* temp = q.front();
        if (temp->left)
          q.push(temp->left);
        if (temp->right)
          q.push(temp->right);
        if (maxVal < temp->val)  // if the node's value is greater than max
                                 // value, update max
          maxVal = temp->val;
        q.pop();
      }
      ans.push_back(maxVal);  // as we've function of vector, and we need to loop it for
                    // every level of tree, push max value in ans vector
    }
    return ans;  // return that vector
  }
};

/*
OR ALTERNATIVE APPROACH FOR MAX VALUE:
  {   TreeNode* t=q.front();q.pop();
                v.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            ans.push_back(v);
FROM HERE---->   int ma=v[0];
         for(int i=1;i<v.size();i++)
             ma=max(ma,v[i]);
         temp.push_back(ma);
        }
        return temp;
    }
};
*/