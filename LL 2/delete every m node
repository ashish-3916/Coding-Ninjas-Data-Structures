Delete every N nodes
Given a linked list and two integers M and N. Traverse the linked list such that you retain M nodes then delete next N nodes, 
continue the same until end of the linked list. 
That is, in the given linked list you need to delete N nodes after every M nodes.




node* skipMdeleteN(node  *head, int M, int N) {
    
    if(M==0) return NULL; // edge case  not a base case
    
    //base case
    if(head==NULL ||head->next==NULL) 
    {
        return head;
    }
    
    node*temp=head;
    int count1=0;
    int count2=0;
    while(temp->next !=NULL && count1<M-1) //travel M nodes
    {   count1++;
        temp=temp->next;
        
    }
    node*t1=temp;
   // t1=temp;
  temp=temp->next;
    if(temp==NULL)
        return head;
    
    while(temp->next!=NULL && count2<N-1)
    {   count2++;
        temp=temp->next;
      
    }
    
    node*t2;
    t2=temp->next;
      

    node*m=skipMdeleteN(t2,M,N);   
    t1->next=m;
    return head;


}
