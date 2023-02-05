class Solution {
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int>ans;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        int i=0,j=0;
        for(int inp=0;inp<p.length();inp++)
        {
            int ch=(p[inp]-'a');
            v1[ch]++;
        }

        while(j<s.size())
        {
            int ch2=s[j]-'a';
            v2[ch2]++;
            if(j-i+1!=p.length())
            {
              //nothing
            }
            else
            {
                if(v1==v2)
                {
                    ans.push_back(i);
                    i++;
                    int ch3=s[i-1]-'a';
                    v2[ch3]--;
                }
                else
                {
                    i++;
                    int ch3=s[i-1]-'a';
                    v2[ch3]--;
                }
            }
            j++;
        }
        return ans;
    }
};
