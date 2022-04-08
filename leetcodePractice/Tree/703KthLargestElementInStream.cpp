#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/kth-largest-element-in-a-stream/
struct CustomNode {
    int val;
    int cnt; // counter for the nodes in subtree
    CustomNode *left, *right;
    
    CustomNode(int x) : val(x), cnt(1), left(NULL), right(NULL) {}
};

class KthLargest {
private:
    CustomNode *root = NULL;
    int k;

    CustomNode* insert(CustomNode *root, int num) {
        if (root == NULL)
            return new CustomNode(num);
        
        if (root->val < num) // right subtree
            root->right = insert(root->right, num);
        else // left subtree
            root->left = insert(root->left, num);
        
        root->cnt++; // increment number of nodes in the tree
        
        return root;
    }
    
    int search(CustomNode *root, int k) { // copy K
        if (root == NULL)
            return 0; // this will not be executed with valid input
        
        int nodesRight = 0; // number of nodes in the right subtree
        if (root->right != NULL)
            nodesRight = root->right->cnt;
        
        // if M nodes in the right subtree, root is M+1 largest
        
        int rootLargest = nodesRight+1; // M+1 largest
        if (rootLargest == k)
            return root->val;
        else if (k < rootLargest)
            return search(root->right, k); // perform search in right subtree
        
        // otherwise, remove the right half nodes,
        // and search in the left subtree
        k = k - rootLargest;
        
        return search(root->left, k);
    }
    
public:
    KthLargest(int k, vector<int>& nums) {
        // construct a tree
        for (int num : nums)
            this->root = this->insert(this->root, num);
        
        this->k = k;
    }
    
    int add(int val) {
        this->root = this->insert(this->root, val); // O(logN) time
        
        // search for correct K-th largest
        return search(this->root, this->k);
    }
};


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    KthLargest kthLargest(k, nums);
    for (int i = 0; i < n; ++i) {
        int val = kthLargest.add(nums[i]);
        cout << val << endl;
    }
    return 0;
}
