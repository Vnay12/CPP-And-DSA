/*
This is Stack implementation using stack stl : stack
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    st.push(10);
    st.push(12);

    cout<<"Top element "<<st.top()<<endl;
    st.pop();
    cout<<"Top element "<<st.top()<<endl;

}