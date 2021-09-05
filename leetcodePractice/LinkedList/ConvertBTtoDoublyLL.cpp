#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/convert-given-binary-tree-doubly-linked-list-set-3/
struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int data){
    node* newnode = new node;
    newnode->data = data;
    newnode->left = newnode->left = NULL;
    return newnode;
}

void printlist(node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->right;
    }
}

void binaryTreeToDoublyLL(node* root, node **head){

    if(root == NULL) return;

    static node* prev = NULL;

    binaryTreeToDoublyLL(root->left, head);
    if(prev==NULL)
    *head=root;
    else{
        root->left = prev;
        prev->right = root;
    }
    prev=root;

    binaryTreeToDoublyLL(root->right, head);
}

int main(){
    node *root        = newNode(10);
    root->left        = newNode(12);
    root->right       = newNode(15);
    root->left->left  = newNode(25);
    root->left->right = newNode(30);
    root->right->left = newNode(36);
 
    node *head = NULL;
    binaryTreeToDoublyLL(root, &head);
 
    printlist(head);
}