#include <bits/stdc++.h>
using namespace std;

class node {
 public:
  int data;
  node* next;
  node(int val) {
    data = val;
    next = NULL;
  }
};


void insert(node*& head, int val) {
  // here we're taking head as by reference & not by value,so used *&
  node* n = new node(val);
  if (head == NULL) {
    head = n;
  }

  node* t = head;
  while (t->next != nullptr) {
    t = t->next;
  }

  t->next = n;
}


void inserthead(node*& head, int val) {
  node* n = new node(val);
  n->next = head;
  head = n;
}


void display(node* head) {
  node* t = head;
  while (t != nullptr) {
    cout << t->data << "";
    t = t->next;
  }
  cout << endl;
}


bool search(node* head, int key) {
  node* t = head;
  while (t != nullptr) {
    if (t->data == key)
      return true;
    t = t->next;
  }
  return false;
}


void deletehead(node*& head) {
  node* todelete = head;
  head = head->next;

  free(todelete);
}


void deletenode(node*& head, int val) {
    if(head==nullptr)
    return;

    if(head->next==NULL)
    {
        deletehead(head);
        return;
    }

  node* t = head;
  while (t->next->data != val) {
    t = t->next;
  }
  node* to_del = t->next;
  t->next = t->next->next;
  free(to_del);
}

void makeCycle(node* &head, int pos) {
node *temp =head;
node *startNode;

int count = 1;
while(temp->next != NULL)
{
  if(count==pos){
    startNode=temp;
  }
  temp = temp->next;
  count++;
}
temp->next = startNode;
}

bool deletecycle(node* &head)
{

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, i, t, count = 0, j;

  node* head = nullptr;
  insert(head, 1);
  insert(head, 2);
  insert(head, 3);
  insert(head, 4);
  insert(head, 5);
  insert(head, 6);
  // inserthead(head, 8);
  makeCycle(head, 3);
  display(head);
  // cout << search(head, 5);
  // deletenode(head, 3);
  // deletehead(head);
  return 0;
}