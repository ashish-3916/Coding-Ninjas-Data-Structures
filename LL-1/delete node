Given a linked list and a position i, delete the node of ith position from Linked List iteratively.
If position i is greater than length of LL, then you should return the same LL without any change.
Indexing starts from 0. You don't need to print the elements, just delete the node and return the head of updated LL.


int length(Node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
Node* deleteNode(Node *head, int i) {
   
    Node *p=head;
    Node *q=NULL;
    
    if(i<0||i>=length(head))
    {   }
    else if(i==0)
    {
        head=p->next;
        delete p;
    }
    else
    {
        for(int j=0;j<i&&p!=NULL;j++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        delete p;
    }
    return head;
}
