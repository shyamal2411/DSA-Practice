#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/multiply-two-numbers-represented-linked-lists/
// https://youtu.be/XVm27KGy4Fw - FOR REFERENCE
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

struct Node{
    int data;
    struct Node* next;
};

struct Node *newNode(int data){
    struct Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct Node** headRef, int newData){
    struct Node* new_Node=newNode(newData);
    new_Node->next=*headRef;
    (*headRef) = new_Node;
}

long long multiply(struct Node* first, struct Node* second){

long long n=1000000007;
long long num1=0, num2=0;

    while(first || second){
        if(first){
        num1=num1*10+first->data;
        first=first->next;
    }
    if(second)
    {
        num2=((num2)*10)%n+second->data;
        second=second->next;
    }
  }
    return ((num1%n)*(num2%n))%n;
}

void print(struct Node* node){
    while(node){
        cout<<node->data<<" ";
        if(node->next)
        cout<<"->";
    }
    cout<<endl;
}

int main(){
    struct Node* first=NULL;
    struct Node* second=NULL;

    push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    printf("First List is: ");
    print(first);
   
    push(&second, 4);
    push(&second, 8);
    printf("Second List is: ");
    print(second);
   
    cout<<"Result is: ";
    cout<<multiply(first, second);
return 0;
}