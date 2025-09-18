/*
Operations:
1) Insert Element
    - push_back(value) // O(1)
    - insert(position,value) // O(N)
   
2) Access
    - v[position] // O(1)
    - v.at(position) // O(1)

3) Find Size
    - v.size()

4) Delete element
    - pop_back() // Last element - O(1)
    - erase()  // O(N) - Because every element needs to shift



 */


#include <bits/stdc++.h>
using namespace std;


void printvector(vector<int> v){
for (int i = 0; i < v.size(); i++) {
 cout<<v[i]<<" ";
}
}

void deleteVector(vector<int> v){
    v.erase(v.begin()+1);
    printvector(v);
}

int main(){

    vector<int> v1;
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    


    printvector(v1);
}