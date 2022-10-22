//Time Comp: O(n*n)
//Space Comp: O(n)

#include <bits/stdc++.h> 
void fix_position(int x,stack<int> &stack){
    if(stack.size()==0 || stack.top()<x)
        stack.push(x);
    else{
        int a=stack.top();
        stack.pop();
        fix_position(x,stack);
        stack.push(a);
    }
}
void reverse(stack<int> &stack){
    if(stack.size()>0){
        int x=stack.top();
        stack.pop();
        reverse(stack);
        fix_position(x,stack);
    }
}
void sortStack(stack<int> &stack)
{
    reverse(stack);	
}
