#include<bits/stdc++.h>
using namespace std;


map<int, int> mp;
map<int, int> :: iterator it;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
} *root=NULL;

void verticalSum(Node *root, int hd){
    if(!root)
        return;
        verticalSum(root->left, hd-1);
        mp[hd] += root->data;
        verticalSum(root->right, hd+1);
    return;
}

int main(){
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int hd=0;
    verticalSum(root, hd);

    for(it=mp.begin(); it!=mp.end(); it++){
        cout<<it->second<<" ";
    }
    return 0;
}
