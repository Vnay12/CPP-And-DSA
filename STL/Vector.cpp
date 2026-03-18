/*
 This is Vector STL Container Code
 Vector : Dynamic sized array

 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare as empty vector
    vector<int> v1;

    // Declare vector with size 3 and fills its value with 5
    vector<int> v2(3, 5);

    // Printing vector
    for (int x : v2)
    {
        cout << x << " ";
    }
    /*
    Approach: Print using for each element
    Time Complexity: O(N)

     */

    // Printing vector method 2
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i);
        cout << v2[i];
    }
    /*
    Approach: Printing
    Time Complexity: O(N)

     */

    // inserting element at the back
    v2.push_back(2);
    /*
    Approach: Push Back
    Time Complexity: O(1)
     */

    // inserting at specific index 2
    // begin + key = ( 0 + 2 = 3)
    v2.insert(v2.begin() + 2, 4);
    /*
    Approach: Insert(position,value)
    Time Complexity: O(N)
    Reason: Takes Linear Time as it shifts the elements to make space
     */



    // Deleteing the element
    // 1) Erase(position)
    v2.erase(find(v2.begin(), v2.end(), 3));
    /*
    Approach: Erase
    Time Complexity: O(N)
    Reason: Takes Linear Time as it traverse and shift the element after delete
     */

     // 2) pop_back
     v2.pop_back();
     /*
     Approach: Deleting last element
     Time Complexity: O(1)
      */

      
}