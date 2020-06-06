Arrange elements in a given Linked List such that, all even numbers are placed after odd numbers. Respective order of elements should remain same.
Note: Input and Output has already managed for you. You don't need to print the elements, instead return the head of updated LL.


node* arrange_LinkedList(node* head)
{   
    node *even= new node(0);
    node *etail=even;
    
    node *odd=new node(0);
    node *otail=odd;
    
   while(head)
    {
        if(head->data%2==0)
        {
            
            etail->next=head;
            etail=head;
            head=head->next;
            etail->next=NULL;
        }
        else
        {
            otail->next=head;
            otail=head;
            head=head->next;
            otail->next=NULL;
        }
    }
        otail->next=even->next;
        return odd->next;
}
