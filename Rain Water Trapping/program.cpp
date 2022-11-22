class Solution {
public:
    int trap(vector<int>& height)
    {
        int n=height.size();
        int ans=0,b=0;
        vector<int>leftmax(n);
        vector<int>rightmax(n);
        int left=-1;
        int right=-1;
        
        //Finding the left and right boundaries for each tower
        
        int s=0,e=n-1;
        
        while(s<n && e>=0)
        {
            left=max(left,height[s]);
            right=max(right,height[e]);
            leftmax[s]=left;
            rightmax[e]=right;
            s++;
            e--;
        }
        
        //finding the amount of water and Adding it
        
        for(int i=0;i<n;i++)
        {
            b=min(leftmax[i],rightmax[i])-height[i];
            
            if(b>0)
                ans+=b;
        }
        
        return ans;
        
    }
};
