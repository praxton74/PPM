class Solution {
public:
    
    bool palin(string str)
    {
        string strev;
        strev=str;
        reverse(strev.begin(), strev.end());
        if(str==strev)
        {
            return true;
        }
        return false;
    }
    
    string firstPalindrome(vector<string>& words)
    {
            for(auto it: words)
            {
                bool found=palin(it);
                if(found==true)
                {
                    return it;
                }
            }
            return "";
    }
};
