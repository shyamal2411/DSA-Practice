// C++ implementation to count triplets in a sorted doubly linked list
// whose sum is equal to a given value 'x'
#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  struct Node *next, *prev;
};

int countTriplets(struct Node* head, int x) {
  struct Node *p1, *p2, *p3;

  int count = 0;

  for (p1 = head; p1 != NULL; p1 = p1->next) {
    for (p2 = p1->next; p2 != NULL; p2 = p2->next) {
      for (p3 = p2->next; p3 != NULL; p3 = p3->next) {
        if ((p1->data + p2->data + p3->data)==x)
        count++;
      }
    }
  }
  return count;
}

void insert(struct Node** head, int data) {
 
  struct Node* temp = new Node();

  temp->data = data;
  temp->next = temp->prev = NULL;

  if ((*head) == NULL)
    (*head) = temp;
  else {
    temp->next = *head;
    (*head)->prev = temp;
    (*head) = temp;
  }
}

int countHashfunc(struct Node* head, int x)
{
    struct Node* p1,*p2, *p3;
    int count=0;

    unordered_map<int, Node*> mp;

    for(p1=head;p1!=NULL;p1=p1->next)
    mp[p1->data]=p1;

    for(p1=head;p1!=NULL;p1=p1->next)
    {
      for (p2 = p1->next; p2 != NULL; p2 = p2->next) {
        int sum = p1->data + p2->data;

        if(mp.find(x-sum)!=mp.end() && mp[x-sum]!=p1 && mp[x-sum]!=p2)
        count++;
      }
}
return (count/3);
}
int main() {
  struct Node* head = NULL;

  insert(&head, 9);
  insert(&head, 8);
  insert(&head, 6);
  insert(&head, 5);
  insert(&head, 4);
  insert(&head, 2);
  insert(&head, 1);

  int x = 17;

  cout << "Count = " << countTriplets(head, x)<<"\n";
  cout << "Hash Count = " << countHashfunc(head, x);
  return 0;
}
