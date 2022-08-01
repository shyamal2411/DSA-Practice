#include <bits/stdc++.h>
using namespace std;

class LinkedList {
public:
    // Linked list Node
    class Node {
    public:
        int data;
        Node* next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
    };
    Node* head;

    // Main operation starts
    Node* deleteNode(int key){
        Node* temp;
        Node* first = head; Node* second = head;

        for(int i = 0; i < key; i++){
            if(second -> next == NULL){
                if(i == key - 1){
                    temp = head;
                    head = head -> next;
                    free(temp);
                }
                return head;
            }
            second = second -> next;
        }

    //increment both pointers until second reaches the end
        while(second -> next != NULL){
            first = first -> next;
            second = second -> next;
        }

        temp = first -> next;
        first -> next = first -> next -> next;
        free(temp);
        return head;
    }
 

 Node* push(int new_data)
    {
        Node* new_node = new Node(new_data);
        new_node->next = head;
        head = new_node;
        return head;
    }
 
    void printList()
    {
        Node* tnode = head;
        while (tnode != NULL) {
            cout << (tnode->data) << (" ");
            tnode = tnode->next;
        }
    }
};

int main()
{
    LinkedList* list = new LinkedList();
    list -> head = list -> push(1);
    list -> head = list -> push(3);
    list -> head = list -> push(6);
    list -> head = list -> push(5);
    
    cout<<"Before deletion: ";
    list -> printList();

    int n = 1;
    list -> head = list -> deleteNode(n);
    
    cout<<"After deleting "<<n<<"th node from end"<<endl;
    list -> printList();
}