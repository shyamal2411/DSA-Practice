#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node (int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void inorder(struct Node* root){
    stack<Node*> stk;
    Node* curr=root;
    while(curr!=NULL || !stk.empty()){
        while(curr!=NULL){
            stk.push(curr);
            curr=curr->left;
        }
        curr=stk.top();
        stk.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}

int main(){
struct Node *root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);
inorder(root);
return 0;
}