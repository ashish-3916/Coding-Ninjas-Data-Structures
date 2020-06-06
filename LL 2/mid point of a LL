Given a linked list, find and return the midpoint.


#include <cmath>
int length(node*head)
{
     int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
node* midpoint_linkedlist(node *head)
{
    // Write your code here
   int x=ceil(length(head)/2);
    for(int i=1;i<x;i++)
    {
        head=head->next;
    }
  
    return head;
}
