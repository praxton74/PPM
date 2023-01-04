class Solution {
public:
    int minimumRounds(vector<int>& tasks)
    {
        vector<vector<int>>ans;
        vector<int>res;
        sort(tasks.begin(),tasks.end());
        if((tasks.size()==2 && tasks[0]==tasks[1]) || (tasks.size()==3 && ((tasks[0]==tasks[1])==tasks[2])))
        {
            return 1;
        }
        for(int i=0;i<tasks.size()-1;i++)
        {
            if(tasks[i]==tasks[i+1])
            {
                res.push_back(tasks[i]);
            }
            else
            {
                res.push_back(tasks[i]);
                ans.push_back(res);
                res.clear();
            }
        }
        res.push_back(tasks.size()-1);
        ans.push_back(res);
        int r=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i].size()>=2)
            {
                int s=ans[i].size();
                if(s==2 || s==3)
                {
                    r++;
                    continue;
                }
                int q=s/3;
                if(s%3!=0)
                {
                    r+=(q+1);
                }
                else
                {
                    r+=q;
                }
            }
            else
            {
                return -1;
            }
        }
        return r;
    }
};
