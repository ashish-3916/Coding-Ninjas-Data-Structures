Node* insertNodeRec(Node *head, int i, int data) {
   
     if(i==0)
    {
        Node *p=new Node(data);
        p->next=head;
        head =p;
        return p;
    }
    
    if(head==NULL || i<0)
      return head;
    
   
    head->next=insertNodeRec(head->next,i-1,data);
   
    return head;
}
