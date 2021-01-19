#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* newnode(int data)
{
    node* new_node=new node();
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}

void push(node** refHead,int newData)
{
    node* new_node=newNode(newData);
    new_node->next=(*refHead);
    (*refHead)=new_node;
}

node* addtwolist(node* first,node* second)
{
    node* resulthead=NULL;
    node *temp,*prev=NULL;
    int carry=0,sum;

while(first!=NULL || second!=NULL)
{
    sum=carry+(first?first->data:0) +(second?second->data:0);
    carry=(sum>=0)?1:0;
    sum=sum%10;
    temp=newnode(sum);
    if(resultHead==NULL)
    
}
}

