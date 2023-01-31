class Solution {
  public:
    int minRepeats(string A, string B)
    {
        // code here
        int c=1;
        string str=A;
        while(A.length()<B.length())
        {
            A=A+str;
            c++;
        }
        if (A.find(B) !=-1)
        {
            return c;
        }
        A=A+str;
        c++;
        if (A.find(B) !=-1)
        {
            return c;
        }
        return -1;
    }
};
