Given a linked list, i & j, swap the nodes that are present at i & j position in the LL.
You need to swap the entire nodes, not just the data.

//head is head of your linked list, i and j are indexes to be swapped
// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
node* swap_nodes(node *head,int i,int j)
{
    if(i==j){
        return NULL;
    }
    if(i>j){
        int a=i;
        i=j;
        j=a;
    }
    node* p1=NULL;
    node* p2=NULL;
    node* temp1=head;
    node* temp2=head;
    if(i==0){
        for(int a=1;a<=j;a++){
            p2=temp2;
            temp2=temp2->next;
        }
        if(j==1){
            node *a=temp2->next;
            temp2->next=temp1;
            temp1->next=a;
            return temp2;
        }
        node *a=temp1->next;
        temp1->next=temp2->next;
        p2->next=temp1;
        temp2->next=a;
        return temp2;
    }   
    for(int a=1;a<=i;a++){
        p1=temp1;
        temp1=temp1->next;
    }
    for(int a=1;a<=j;a++){
        p2=temp2;
        temp2=temp2->next;
    }
    p1->next=temp2;
    p2->next=temp1;
    node *a=temp1->next;
    temp1->next=temp2->next;
    temp2->next=a;
    return head;
}


node* swap_nodes(node *head,int i,int j)
{
    node* temp=head , *prev=NULL;
    
    node *c1=NULL,*p1=NULL; //current 1 ,previous 1
    
    node *c2=NULL,*p2=NULL;//current 2 ,previous 2
    
    int count=0;
    while(temp!=NULL)
    {
        if(count==i)
        {
          c1=temp;
          p1=prev;
            
        }
        else if(count==j)
        {
          c2=temp;
          p2=prev;
        }
        prev=temp;
        temp=temp->next;
        count++;
    }
    
    if(p1!=NULL)
        p1->next=c2;
    else
        head=c2;
    
    if(p2!=NULL)
        p2->next=c1;
    else
        head=c1;
    node * p=c2->next;
    c2->next= c1->next;
     c1->next= p;
    
    return head;
    
}


node* swap_nodes(node *head,int i,int j)
{
    //write your code here
    node *p=head,*q=head;
    
    for(int index=0;index<i;index++)
    {
        p=p->next;
    }
     for(int index=0;index<j;index++)
    {
        q=q->next;
    }
    
    int x=p->data;
    p->data=q->data;
    q->data=x;
    
    return head;
}
