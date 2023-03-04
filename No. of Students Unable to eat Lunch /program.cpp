class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        deque<int>dq;
        for(int i=0;i<students.size();i++)
        {
            dq.push_back(students[i]);
        }
        int l=0;
        while(sandwiches.size()>0)
        {
            if(sandwiches[0]==dq.front())
            {
                l=0;
                sandwiches.erase(sandwiches.begin());
                dq.pop_front();
            }
            else
            {
                l++;
                int ele=dq.front();
                dq.pop_front();
                dq.push_back(ele);
                if(l==dq.size())
                {
                    break;
                }
            }
        }
        return dq.size();
    }
};
