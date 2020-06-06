Given a linked list and an integer n, append the last n elements of the LL to front.

int length(node *head) {
    
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
node* append_LinkedList(node* head,int n)
{
    //write your code here
    node *p=head;
    node *q=head;
    for(int i=1;i<length(head)-n;i++)
    {
        p=p->next;
    }
    for(int i=1;i<length(head);i++)
    {
        q=q->next;
    }
    q->next=head;  //circular LL
    head=p->next;
    p->next=NULL; //breaking that circular LL
    
    return head;
    
}
