int hl=haystack.length();
        int nl=needle.length();
        if(nl==0)
        {
            return 0;
        }
        int j=0;
        for(int i=0;i<hl;i++)
        {
            if(haystack[i]==needle[j])
            {
                j++;
                if(j==nl)
                {
                    return i-j+1;
                }
            }
            else
            {
                i=i-j;
                j=0;
            }
        }
        return -1;
