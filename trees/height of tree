#include <bits/stdc++.h> 

int height(TreeNode<int>* root) {
   
    int h =1;
    
    if(root->children.size()==0)
        return h;	
    
    int arr[root->children.size()];
    for(int i=0;i<root->children.size();i++)
    {
        arr[i]=height(root->children[i]);
        
    }
    sort(arr,arr+root->children.size(),greater<int>());
	h+=arr[0];
    
    return h;
}
