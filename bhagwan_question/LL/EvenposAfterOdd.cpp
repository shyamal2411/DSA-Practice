// Question from Apna college
// https://www.youtube.com/watch?v=TaNfBSbpX_o

void evenAfterOdd(struct Node*& head) {
  Node* odd = head;
  Node* even = head->next;
  Node* evenStart = even;
  while (odd->next != NULL && even->next != NULL) {
    odd->next = even->next;
    odd = odd->next;
    even->next = odd->next;
    even = even->next;
  }
  odd->next = evenStart;
  if (odd->next != NULL) {
    even->next = NULL;
  }
}