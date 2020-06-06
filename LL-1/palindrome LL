Check if a given linked list is palindrome or not. Return true or false.  

int length(node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}

node *reverse(node*head2)
{
    node *p=head2,*q=NULL,*r=NULL;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head2=q;
    return q;
}

bool check_palindrome(node* head)
{
    //write your code here
    node *p=head;
    int x=length(head)/2;
    
    for(int i=1;i<x;i++)
    {
        p=p->next;
    }
    node *head2=p->next;
    p->next=NULL;
   head2= reverse(head2);
   
    while(head&&head2)
    {
        if(head->data!=head2->data)
            return false;
        head=head->next;
        head2=head2->next;
    }
    return true;
}
