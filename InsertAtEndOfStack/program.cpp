#include <bits/stdc++.h> 

void solve(stack<int>& stk, int ele)
{
    if(stk.empty())
    {
        stk.push(ele);
        return;
    }
    int num=stk.top();
    stk.pop();
    
    // Recursive Call
    solve(stk,ele);
    stk.push(num);
    
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    
    solve(myStack,x);
    return myStack;
}
