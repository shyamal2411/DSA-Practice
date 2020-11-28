#include<bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    struct node *left; //for left node. 
    struct node *right; //for right node

node(int value) //information to be stored
 {
    data = value;
    left =NULL; //forming 2 nodes under the node.
    right =NULL;//basically left-right childs of any node.
 }
};
int main()
{       cout<<"Just trying Git";
    //create root node
    struct node* root= new node(1);
    root->left=new node(2);
    root->right= new node(3);

    root->left->left=new node(4);
    return 0;
}
//*?n+1 size no array
//?cin>>n; cin>>k;
//?int arr[n];*/
