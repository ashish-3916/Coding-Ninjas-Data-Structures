node *reverse_linked_list_rec(node *head)
{
    //write your recursive code here
  if(head==NULL || head ->next ==NULL)
      return head;
    
    node* smallans=reverse_linked_list_rec(head->next);
    node*tail= head->next;
    tail->next=head;
    head ->next =NULL;
    
    return smallans;
                                         
}
