node* eliminate_duplicate(node* head)
{
    //write your code here
    node *p=head->next,*q=head;
    while(p)
    {
       if(p->data==q->data)
       {
           q->next=p->next;
           node *t=p;
           p=p->next;
          delete t;
       }
      else{
        q=q->next;
        p=p->next;
        }
    }
    return head;
}
---------------------------------------------------------------------------

// recursively

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
 if(head==NULL || head->next == NULL)
 return head;
  if(head->data == head->next->data)
  {
      SinglyLinkedListNode* temp=head;
      head=head->next;
      temp->next=NULL;
      delete temp; 
      return removeDuplicates(head);
  }
  else{
  head->next =removeDuplicates(head->next);
  return head;
  }
}
--------------------------------------------------------------

if ((head == null) || (head.next == null))
        return head;
  
    Node tmp = RemoveDuplicates(head.next);
       
    if (head.next != null)
        if (head.data == head.next.data)
            head.next = head.next.next;
    
    return head;
