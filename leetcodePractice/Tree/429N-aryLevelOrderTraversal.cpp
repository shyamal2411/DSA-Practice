/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
 public:
  vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> ans;
    if (root == NULL)
      return ans;
    queue<Node*> q;
    q.push(root);

    while (q.empty() != true) {
      vector<int> vec;
      int n = q.size();
      for (int i = 0; i < n; i++) {
        Node* t = q.front();
        q.pop();
        vec.push_back(t->val);
        // everything same upto this

        // as this is N-ary tree, we push elements upto children's size
        for (int i = 0; i < t->children.size(); i++) {
          q.push(t->children[i]);
        }
      }
      ans.push_back(vec);
    }
    return ans;
  }
};