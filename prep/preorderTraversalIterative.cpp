#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data){
    struct node *node =new struct node;
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

void PreoderIterative(node* root){
    if(!root)
    return;

    stack<node*> stk;
    stk.push(root);

    while(!stk.empty()){
        struct node* node= stk.top();
        cout<< node->data<<" ";
        stk.pop();

        if(node->right)
        stk.push(node->right);
        if(node->left)
        stk.push(node->left);
    }
}

int main(){
     struct node* root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->left = newNode(2);
    PreoderIterative(root);
    return 0;
}