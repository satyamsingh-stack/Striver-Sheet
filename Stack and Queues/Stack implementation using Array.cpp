#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int *arr;
    int top1,size;
    
public:
    
    Stack(int capacity) {
        // Write your code here.
        this->size=capacity;
        arr=new int[capacity];
        top1=-1;
    }

    int isFull() {
        // Write your code here.
        if(top1==size){
            return 1;
        }
        else    
            return 0;
    }

    int isEmpty() {
        // Write your code here.
        if(top1==-1)
            return 1;
        else
            return 0;
    }

    void push(int num) {
        // Write your code here.
        if(isFull())
            return ;
        top1=top1+1;
        arr[top1]=num;
    }

    int pop() {
        // Write your code here.
        if(isEmpty())
            return -1;
        int deleted_element=arr[top1];
        top1--;
        return deleted_element;
    }
    
    int top() {
        // Write your code here.
        if(isEmpty())
            return -1;
        int x=arr[top1];
        return x;
    }
    
    
    
    
};
