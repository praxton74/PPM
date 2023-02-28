string isSubset(int a1[], int a2[], int n, int m)
{
    sort(a1,a1+n);
    sort(a2,a2+m);
    int x=0,j=0;
    for(int i=0;i<n;i++)
    {
       if(a1[i]==a2[j]) 
       {
           j++;
           x++;
           if(x==m)
           return "Yes";
       }

    }
    return "No";
}
