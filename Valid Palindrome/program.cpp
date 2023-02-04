class Solution {
public:
    bool isPalindrome(string s)
    {
        if(s==" ")
        {
            return true;
        }
        vector<char>st;
        for(int i=0;i<s.length();i++)
        {
            if( (s[i]>='a'&& s[i]<='z')  || (s[i]>='A' && s[i]<='Z')  || (s[i]>='0'&& s[i]<='9') )
            {
                st.push_back(tolower(s[i]));
            }
        }
        vector<char>strev;
        copy(st.begin(),st.end(), back_inserter(strev));
        reverse(strev.begin(), strev.end());

        int f=0;
        for(int i=0;i<st.size();i++)
        {
            if(st[i]!=strev[i])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            return true;
        }
        return false;
    }
};
