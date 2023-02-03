#include <bits/stdc++.h> 
class Queue {
    int rear,frnt;
    int *arr;
public:
    Queue() {
        // Implement the Constructor
        rear=0;
        frnt=0;
        arr = new int[100001];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(frnt==rear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        arr[rear]=data;
        rear=rear+1;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty())
            return -1;
        else{
            int del=arr[frnt];
            frnt++;
            return del;
        }
    }

    int front() {
        // Implement the front() function
        if(isEmpty())
            return -1;
        else{
            return arr[frnt];
        }
    }
};
