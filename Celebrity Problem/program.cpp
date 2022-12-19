class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        // int y=s.top();
        // s.pop();
        
        while(s.size()>=2){
            
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            
            if(M[x][y]==1)
            s.push(y);
            else
            s.push(x);      
        }      
            int ans=s.top();
            s.pop();
              for(int i =0; i<n; i++){
        if(i!=ans){
           if(M[ans][i]==1 || M[i][ans]==0){
         return -1; 
       }  
        }
              }        
        return ans;  
        
        
    }
};
