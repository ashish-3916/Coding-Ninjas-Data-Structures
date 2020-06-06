Given a linked list and a position i, print the node at ith position.
If position i is greater than length of LL, then don't print anything.

void printIthNode(Node *head, int i) {
  
    Node* temp = head;
    int count =0;
    while(temp)
    {
        if(i==count)
        {
            cout<< temp->data<<endl;
            return;
        }
        
        count++;
        temp=temp->next;
    }
}
