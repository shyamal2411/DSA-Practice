#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void InsertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void Display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool isPresent(node *head, int key)
{
    if (!head)
    {
        return false;
    }
    int ans = 0;
    if (head->data == key)
    {
        return true;
    }
    return isPresent(head->next, key);
}
int MaxElement(node *head)
{
    if (!head)
    {
        return INT_MIN;
    }
    return max(head->data, MaxElement(head->next));
}
int MinElement(node *head)
{
    if (!head)
    {
        return INT_MAX;
    }
    return min(head->data, MinElement(head->next));
}

node* OddEven(node* &head)
{
    node* Even=NULL;
    node* Odd=NULL;
    node* e=NULL;
    node* o=NULL;
    node* t = head;
    while (t)
    {
        if(t->data%2==0)
        {
            if(Even==NULL)
            {
                Even = t;
                e=t;
                t = t->next;
            }
            else
            {
                e->next = t;
                t =t->next;
                e = e->next;
            }
        }
        else
        {
            if(Odd==NULL)
            {
                Odd = t;
                 o =t;
                 t = t->next;
            }
            else
            {
                o->next = t;
                t = t->next;
                o = o->next;
            }
        }
    }
    if(e)
    {
        e->next = Odd;
    }
    if(o)
    {
        o->next = NULL;
    }
    if(Even)
    {
        return Even;
    }
    return Odd;

}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        InsertAtTail(head, arr[i]);
    }
    Display(head);
    if (isPresent(head, 40))
    {
        cout << "Element present in the Linked_List" << endl;
    }
    else
    {
        cout << "Element is not present in the Linked_List" << endl;
    }
    if (isPresent(head, 400))
    {
        cout << "Element present in the Linked_List" << endl;
    }
    else
    {

        cout << "Element is not present in the Linked_List" << endl;
    }
    cout << "Max Element in the linked_list is " << MaxElement(head) << endl;
    cout << "Min Element in the linked_list is " << MinElement(head) << endl;
    Display(OddEven(head));
    return 0;
}