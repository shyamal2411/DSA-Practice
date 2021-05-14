class Solution {
 public:
  void convert(Node* root, Node*& head, Node*& prev, int& firstNode) {
    // do the same operation as done in inorder,  left, root, right.
    if (!root)
      return;

    convert(root->left, head, prev, firstNode);  // calling left as done in inordr
    if (firstNode == 0) {
      // if firstNode =0 means we're heading at head i.e. first Node
      firstNode = 1;
      head = root;
      prev = root;
    } else {  // if node is not first, then this part
      prev->right = root;
      prev->right->left = prev;
      prev = prev->right;
    }
    convert(root->right, head, prev, firstNode);
  }

  Node* bToDLL(Node* root) {
    // Node* head=Node* prev=NULL;
    Node* head = NULL;
    Node* prev = NULL;
    int firstNode = 0;
    convert(root, head, prev, firstNode);
    return head;
  }
};

// https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1#
// https://www.youtube.com/watch?v=WVFk9DwRgpY