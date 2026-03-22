/*
 This is Stack Data structure
 */

#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int maxcapacity;
    int top;

public:
    // constructor
    Stack(int cap)
    {
        this->maxcapacity = cap;
        arr = new int[cap];
        top = -1;
    }
    // deconstructor
    ~Stack()
    {
        delete[] arr;
    }

    void push(int key)
    {
        if (top == maxcapacity - 1)
        {
            cout << "Stack Overflow! cannot push !!" << endl;
            return;
        }
        top++;
        arr[top] = key;
    }


    void pop(){
        if(top == -1){
            cout << "Stack Underflow! Stack is empty"  << endl;
            return;
        }
        top--;
    }

    int peek(){
        if(top == -1){
            cout << " Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main()
{

    Stack newstack(5);
    newstack.push(3);
    newstack.pop();
    int ans = newstack.peek();
    cout << ans << endl;
}