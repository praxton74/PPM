class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int b=balance=0,d=deficient=0,s=start=0;
        for(int i=0;i<gas.size();i++)
        {
            b+=gas[i]-cost[i];

            if(b<0)
            {
                d+=b;
                s=i+1;
                b=0;
            }
        }

        if(b+d>=0)
        {
            return s;
        }
        else
        {
            return -1;
        }
    }
};
