#include <bits/stdc++.h>
using namespace std;

struct node {
 public:
  int data;
  node* next;
};

void removedupli(node* head) {
  node* current = head;
  node* del;
  if (current == NULL)
    return;

  while (current != NULL) {
    if (current->data == current->next->data) {
      // jo current node no data, aagad na node na data na equal hoy to
      del = current->next->next;
      /* to del naam na additional node ma next na next node no address store
       * karvao.*/
      /*After assigning address,delete the duplicate node*/
      free(current->next);
      current->next =
          del; /*now assign that stored address to current's address*/
    } else {
      current = current->next;
    }
  }
}

void push(node** head_ref, int newData) {
  node* newnode = new node();
  newnode->data = newData;
  newnode->next = *(head_ref);

  (*head_ref) = newnode;
}
void printlist(node* node) {
  while (node != NULL) {
    cout << " " << node->data;
    node = node->next;
  }
}

int main() {
  node* head = NULL;
  push(&head, 1);
  push(&head, 2);
  push(&head, 3);
  push(&head, 4);
  push(&head, 4);
  push(&head, 5);
  cout << "List before removing duplicates" << endl;
  printlist(head);
  removedupli(head);
  cout << "List after removing duplicates" << endl;
  printlist(head);
  return 0;
}