class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> res;
    	if(root==NULL)
    	{
    	    return res;
    	}
    	queue<Node*>q;
    	q.push(root);
    	bool ltr=true;
    	
    	while(!q.empty())
    	{
    	    int size=q.size();
    	    vector<int> ans(size);
    	    
    	    for(int i=0;i<size;i++)
    	    {
    	        Node*frontval=q.front();
    	        q.pop();
    	        
    	        int index=ltr?i:size-i-1;
    	        ans[index]=frontval->data;
    	        
    	        if(frontval->left)
    	        {
    	            q.push(frontval->left);
    	        }
    	        if(frontval->right)
    	        {
    	            q.push(frontval->right);
    	        }
    	    }
    	    ltr=!ltr;
    	    
    	    for(auto i:ans)
    	    {
    	        res.push_back(i);
    	    }
    	    
    	}
    	return res;
    	
    }
};
