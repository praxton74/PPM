class Solution {
public:
     bool isNozero(int a)
     {
        while(a>0)
        {
            int rem=a%10;
            if(rem==0)
            {
                return 0;
            }
            a/=10;
        }
        return 1;
    }
    
    vector<int> getNoZeroIntegers(int n) 
    {
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            int a = i;
            int b = n-i;    
            if(isNozero(a) and isNozero(b))
            {
                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        return ans;
    }

};
