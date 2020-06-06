 //recursive
int sumOfNodes(TreeNode<int>* root) {
    int sum =root->data;
    
    for(int i=0;i<root->children.size();i++)
    {
        sum+=sumOfNodes(root->children[i]);
    }
    return sum;
}

//level wise

int sumOfNodes(TreeNode<int>* root) {
  
    int sum=0;
    queue<TreeNode<int>*> pn;
    pn.push(root);
    
    while(pn.size()!=0)
    {
        TreeNode<int>* front=pn.front();
        pn.pop();
        sum=sum+front->data;
            
        for(int i=0;i<front->children.size();i++)
        {
            pn.push(front->children[i]);
        }
    }
    return sum;
}
