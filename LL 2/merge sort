Sort a given linked list using Merge Sort.  

int length(node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
node* mergeTwoLLs(node *head1, node *head2) {
    

    node *p=NULL,*q=NULL;
    if(head1->data<head2->data)
    {
        p=head1;
        q=head1;
        head1=head1->next;
        
        
    }
    else if(head1->data>=head2->data)
    {
        p=head2;
        q=head2;
        head2=head2->next;
       
        
    }
    while(head1&&head2)
    {
       if(head1->data<head2->data)
       {
           q->next=head1;
           q=head1;
           head1=head1->next;
           q->next=NULL;
       }
    else if(head1->data>=head2->data)
       {
           q->next=head2;
           q=head2;
           head2=head2->next;
           q->next=NULL;
       }
    }
    if(head1)
        q->next=head1;
    if(head2)
        q->next=head2;
    
    
    return p;
}

node* mergeSort(node *head) {
    //write your code here
   if(head==NULL|| head->next==NULL)
        {return head;}
     
     //breaking node into two half  
    node *p=head;
    for(int i=1;i<length(head)/2;i++)
    {
        p=p->next;
    }
    node *head1=p->next;
    p->next=NULL;
    
  head=mergeSort(head);
    head1=mergeSort(head1);
    
    return mergeTwoLLs(head,head1);
    
}
