void splitList(Node* head, Node** head1_ref, Node** head2_ref) {
  Node* slow=head;
  Node* fast=head->next;
  
   /* we take different condition than regular LL in while loop
    because fast will not be stopping at null, it will get directed to head again, 
    so condition may fail in the very first iteration, that's why we did fast!=head
    same is the case for second condition, fast->next!=NULL won't work here so we did
    fast->next!=head.*/ 
  while(fast!=head && (fast->next)!=head)
  {
      slow=slow->next;
      fast=fast->next->next; //floyd's algo
  }
  
  /*now for 2 new LL, starting point of first will obviously be head, so pointing head_ref to head
    and for second pointer, head2 will be after the slow pointer, i.e. next of slow pointer's position
    */
  *head1_ref=head;
  *head2_ref=slow->next;
  /*now slow's next has to be directed to the starting point of its new LL, so redirecting it to new head*/
  slow->next=*head1_ref;
  Node* cur= *head2_ref;
  while(cur->next!=head)
  {
      cur=cur->next;
  }  
  cur->next= *head2_ref;

}