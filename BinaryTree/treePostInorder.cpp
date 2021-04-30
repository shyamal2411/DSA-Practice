#include<bits/stdc++.h>
using namespace std;

Node * buildTree(int postorder[], int inorder[],int start, int end) {
    static int index = 4; //actually it is n-1, here array is predefined so we write 4
    int val=postorder[index];
    index--;
    Node current=new Node(val);
    
}

int main()
{
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3,1};

    return 0;
}