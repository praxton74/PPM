int poweroftwo(int n)
{
  int x=0;
  while((1<<x)<=n)
  {
    x++;
  }
  return x-1;
}

int solve(int n)
{
  if(n==0)
  {
    return 0;
  }
  int res=poweroftwo(n);
  int ans=(1<<res-1)*res+(n-(1<<x)+1)+solve(n-(1<<x));
  return ans;
}
