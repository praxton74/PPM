class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int i=0,j=0,c=0;
        if(s=="")
        return true;
        while(j<t.length())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
                c++;
                if(c==s.length())
                {
                    return true;
                }
            }
            else if(s[i]!=t[j])
            {
                j++;
            }
        }
        return false;
    }
};**
