/*
This is stack data structure using cpp stl : vector
 */

#include <bits/stdc++.h>
using namespace std;

class Stack
{
    vector<int> arr;

public: 
    void push(int key)
    {
        arr.push_back(key);
    }

    void pop()
    {
        if (arr.empty())
        {
            cout << "Stack Underflow!! Stack is empty" << endl;
            return;
        }
        arr.pop_back();
    }

    int peek()
    {
        if (arr.empty())
        {
            cout << " Stack is empty" << endl;
            return -1;
        }
        return arr.back();
    }
};

int main() {
    Stack myStack;
    
    myStack.push(10);
    myStack.push(20);
    
    cout << "Top is: " << myStack.peek() << endl; // Prints 20
    
    myStack.pop();
    cout << "Top after pop is: " << myStack.peek() << endl; // Prints 10
    
    return 0;
}