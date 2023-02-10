int maxInstance(string s)
    {
        map<char,int>um;
        for(int i=0;i<s.length();i++)
        {
            um[s[i]]++;
        }
        int ct=0;
       while (um['b']>=1 && um['a']>=1 && um['l']>=2 && um['o']>=2 && um['n']>=1) {
            ct++;
            um['b']--;
            um['a']--;
            um['l']-=2;
            um['o']-=2;
            um['n']--;
        }
        return ct;
    }
