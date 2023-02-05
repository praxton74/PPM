class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s==" ")
        return true;
        vector<int>v1(26,0);
        for(int i=0;i<t.length();i++)
        {
            int ch=t[i]-'a';
            v1[ch]++;
        } 
        vector<int>v2(26,0);
        for(int i=0;i<s.length();i++)
        {
            int ch=s[i]-'a';
            v2[ch]++;
        } 
        if(v1==v2) return true;
        return false;
    }
};
