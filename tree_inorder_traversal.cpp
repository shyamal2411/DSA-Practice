#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;
#define ll long long 
#define fo(i,n) for(int i=0;i<n;i++)

//! CREATING A NODE
struct node *createnode(int val)
{
    struct node *temp=new struct node;
    temp->data=val;
    temp->left=temp->right=NULL;
    return temp;
};

//! INSERTING A NODE.
struct node *insertnode(struct node *node,int val)
{
    if(node==NULL) return createnode(val);
    if(val<node->data)
    node->left=insertnode(node->left,val);
    
    else if(val>node->data)
    node->right=insertnode(node->right,val);
    return node;
}

//! INORDER FUNCTION 
void inorder(struct node *root){
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main()
{
    struct node *root=NULL;
    root=insertnode(root,4);
    insertnode(root,5);
    insertnode(root, 1);
    insertnode(root, 2);
    insertnode(root, 3);
    insertnode(root, 7);
    insertnode(root, 6);
    cout<<"In-order traversal of the Binary Search Tree is: ";
    inorder(root);

    return 0;
}