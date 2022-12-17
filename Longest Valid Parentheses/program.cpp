class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        int ret = 0;
        int temp = 0;                                     //temp holds temorary max length.
        {
            if(s[i] == '(')
            {
                stk.push(temp);
                temp = 0;
            }
            else
            {
                if(stk.empty())
                {
                    temp = 0;
                }
                else
                {
                    temp += 2;
                    temp += stk.top();
                    stk.pop();
                    if(temp > ret)
                    {
                        ret = temp;
                    }
                }
            }
        }
        
        return ret;
    }
};
