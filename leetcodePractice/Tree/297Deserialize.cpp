#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/serialize-and-deserialize-binary-tree/
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Codec {
public:
 string serialize(TreeNode* root) {
    if(!root) {
     return "NULL,";
    }
    return to_string(root->val)+","+serialize(root->left)+serialize(root->right);
}

// Decodes your encoded data to tree.
TreeNode* deserialize(string data) {
    queue<string> q;
    string s;
    for(int i=0;i<data.size();i++)
    {
        if(data[i]==',')
        {
            q.push(s);
            s="";
            continue;
        }
        s+=data[i];
    }
    if(s.size()!=0)q.push(s);
    return deserialize_helper(q);
}

TreeNode* deserialize_helper(queue<string> &q) {
    string s=q.front();
    q.pop();
    if(s=="NULL")return NULL;
    TreeNode* root=new TreeNode(stoi(s));
    root->left=deserialize_helper(q);
    root->right=deserialize_helper(q);
    return root;
}
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));

/*
Hey guys I have seen many solutions that would not be accepted in interview.
Moreover i will try to restrict my stl to as minimum as possible so begginers would understand.

The idea behind my answer would be to use a preorder traversal and queue.

    1
   / \
  2   3
     / \
    4   5

 preorder traversal:1,2,x,x,3,4,x,x,5,x,x
 Now if we were to serialize it by using null as x and 1 as string characters this how it would become
 string data = 12xx34xx5xx
 12 can be seen as 1 or 12 and many complications would arise due to this.
 Thus we will try to use a delimiter (i.e commas (',')) to tackle this problem.
 string data = "1,2,x,x,3,4,x,x,5,x,x".

 Okay we have finished with serialization.
 Now how do we deserialize string data = "1,2,x,x,3,4,x,x,5,x,x".
 We can just go through the data stream and be like if till comma or end of string make a new node out of that.
 This would be a very tedious process and may result in incorrect answers.
 We will try to use a data structure to solve this->Queue.

 Why Queue?
 Because we wanna process the data from left to right.

 we do a preorder traversal again to decode it.

 root=1 root->left = deserialize_helper(q) and root->right=deserialize_helper(q)

 This will build up the tree.

 I have copied the idea from this video its a brilliant video and i highly suggest u to watch it for deeper understanding.

 [https://www.youtube.com/watch?v=suj1ro8TIVY&t=689s]
*/

int main(){
    Codec c;
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->right->left=new TreeNode(4);
    root->right->right=new TreeNode(5);
    string data=c.serialize(root);
    cout<<data<<endl;
    TreeNode* ans=c.deserialize(data);
    cout<<ans->val<<endl;
    cout<<ans->left->val<<endl;
    cout<<ans->right->val<<endl;
    cout<<ans->right->left->val<<endl;
    cout<<ans->right->right->val<<endl;
    return 0;
}