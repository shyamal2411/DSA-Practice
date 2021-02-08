class Node {
 public:
  int val;
  Node* next;  // creating structure of node
  Node(int val) {
    this->val = val;
    next = NULL;
  }
};

class MyLinkedList {
 public:
  int size = 0;
  Node* head = new Node(0);  // creating head node.

  MyLinkedList() {}

  int get(int index) {
    if (index >= size)
      return -1;
    Node* temp = head->next;
    for (int i = 0; i < index; i++)
      temp = temp->next;
    return temp->val;
  }

  void addAtHead(int val) {
    Node* temp = head->next;
    head->next = new Node(val);
    head->next->next = temp;
    size++;
  }

  void addAtTail(int val) {
    Node* temp = head;
    while (temp->next != NULL)  // traverse to the last node to operate there.
    {
      temp = temp->next;
    }
    temp->next = new Node(val);  // make a new node & assign temp's next
    size++;                      // update new size of LL.
  }

  void addAtIndex(int index, int val) {
    if (index > size)
      return; /*if user gave index which is not the size of LL, then end this
                 function*/
    Node* temp = head;
    for (int i = 0; i < index; i++)
      Node* temp1 = temp->next;
    temp->next = new Node(val);  // created new node
    temp->next->next = temp;    // initialized temp's next to new node's next
    size++;                      // updated size.
  }

  void deleteAtIndex(int index) {
    if (index >= size)
      return;
    Node* temp = head;
    for (int i = 0; i < index; i++) {
      temp = temp->next;
    }

    Node* temp1 = temp->next;
    temp->next = temp1->next;
    temp1->next = NULL;
    size--;
    free(temp1);
  }
};
