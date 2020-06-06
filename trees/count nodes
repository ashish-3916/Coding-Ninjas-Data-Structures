Given a tree and an integer x, find and return the number of Nodes which are greater than x.


int nodesGreaterThanX(TreeNode<int> *root, int x) {
        
     int sum =0;
    
     if(root->data > x)
      sum++;
       
    
    for(int i=0;i<root->children.size();i++)
    {
        int smallsum=nodesGreaterThanX(root->children[i], x) ;
        sum+=smallsum;
    }
    
    
    return sum;
}
