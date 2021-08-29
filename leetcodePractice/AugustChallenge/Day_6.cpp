#include<bits/stdc++.h>
using namespace std;

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


class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
       vector<vector<int>> ans;
        if(!root)
            return ans;
        queue<Node*> q;
        q.push(root);
        vector<int> temp={root->val};
        ans.push_back(temp);
        while(!q.empty()){
            temp.clear();
            int nodes=q.size();
            while(nodes--){
                Node* curr=q.front();
                q.pop();
                for(auto node: curr->children){
                    temp.push_back(node->val);
                    q.push(node);
                }
            }
            if(temp.empty())
                continue;
                ans.push_back(temp);
        }
        return ans;
    }
};

class Solutionn {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        bfs(root, ans, 0);
        return ans;
    }
    
    void bfs(Node* root, vector<vector<int>> &ans, int level){
        if(!root)
            return;
        if(ans.size()==level)
            ans.push_back({});
        ans[level].push_back(root->val);
        auto children=root->children;
        
        for(int i=0;i<(root->children).size();i++){
            bfs((root->children)[i], ans, level+1);
        }
    }
};

//main function
int main()
{
    //int arr[] = {1,2,3,4,5,6,7,8,9};
    //int arr[] = {3,9,20,null,null,15,7};
    int arr[] = {3,9,20,4,5,1,7};
    // int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};
    //int arr[] = {1,2,3,null,null,4};
    Node* root = new Node(arr[0]);
    for(int i=1;i<arr.size();i++){
        root->children.push_back(new Node(arr[i]));
    }
    Solutionn s;
    vector<vector<int>> ans=s.levelOrder(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}