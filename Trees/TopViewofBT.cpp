
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node* left;
  struct Node* right;

  Node(int x) {
    data = x;
    left = NULL;
    right = NULL;
  }
};

// void topView(struct Node* root);

void topView(Node* root) {
  map<int, int> mp;
  queue<pair<Node*, int>> q;
  if (!root) {
    return;
  }

  q.push({root, 0});
  while (!q.empty()) {
    Node* temp = q.front().first;
    int h = q.front().second;
    q.pop();
    if (!mp[h])
      mp[h] = temp->data;
    if (temp->left)
      q.push({temp->left, h - 1});
    if (temp->right)
      q.push({temp->right, h + 1});
  }
  for (auto itr : mp)
    cout << itr.second << " ";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i, k;
    cin >> n;
    i = n;

    Node* root = NULL;
    queue<Node*> q;
    while (i > 0) {
      int a, b;
      char c;
      cin >> a >> b >> c;
      if (!root) {
        root = new Node(a);
        q.push(root);
      }
      Node* pick = q.front();
      q.pop();

      if (c == 'L') {
        pick->left = new Node(b);
        q.push(pick->left);
      }
      cin >> a >> b >> c;
      if (c == 'R') {
        pick->right = new Node(b);
        q.push(pick->right);
      }
      i -= 2;
    }
    //        inorder(root);
    //        cout<<endl;
    topView(root);
    cout << endl;
  }
  return 0;
}

// } Driver Code Ends

// Structure of binary tree
/*struct Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
// function should print the topView of the binary tree
