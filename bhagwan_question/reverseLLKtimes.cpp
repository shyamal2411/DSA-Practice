class Solution {
 public:
  struct node* reverse(struct node* head, int k) {
    struct node* current = head;
    struct node* newNode = NULL;
    struct node* prev = NULL;
    int count = 0;

    while (current != NULL && count < k)
    //this process is same as normal reversal on leetcode, we only reverse it k times
    {
      newNode = current->newNode;  
      current->newNode = prev;  
      prev = current;      
      current = newNode;   
      count++;
    }

    if (newNode != NULL)               
      head->newNode = reverse(newNode, k); 

    return prev; 
  }
};