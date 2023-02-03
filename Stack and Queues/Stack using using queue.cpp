#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
    queue<int> q1,q2;
   public:

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q2.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        if(q2.empty())
            return true;
        else
            return false;
    }

    void push(int element) {
        // Implement the push() function.
        q1.push(element);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1,q2);
    }

    int pop() {
        // Implement the pop() function.
        if(q2.empty())
            return -1;
        else{
            int ans=q2.front();
            q2.pop();
            return ans;
        }
    }

    int top() {
        // Implement the top() function.
        if(q2.empty())
            return -1;
        else    
            return q2.front();
    }
};
