class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string str1="";
        vector<char> cap,small,res;
        for(int i=0;i<n;i++)
        {
            if(int(str[i])<=90)
            {
                cap.push_back(str[i]);
            }
            else
            {
                small.push_back(str[i]);
            }
        }
        sort(cap.begin(),cap.end());
        sort(small.begin(),small.end());
        /*for(int i=0;i<small.size();i++)
        {
            cout<<small[i]<<" ";
        }*/
        int q=0,w=0;
        for(int i=0;i<n;i++)
        {
            if(int(str[i])>90)
            {
                res.push_back(small[q++]);
            }
            else
            {
                res.push_back(cap[w++]);
            }
        }
        for(int i=0;i<res.size();i++)
        {
            str1+=res[i];
        }
        return str1;
        
    }
};
