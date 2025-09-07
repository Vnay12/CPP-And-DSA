/*
Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1.

Note: Consider 0 based indexing

Examples:

Example 1:
Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}
Output: 4
Explanation: As the target value is 13 , it appears for the first time at index number 2.

Example 2:
Input: N = 7, target=60, array[] = {3,4,13,13,13,20,40}
Output: -1
Explanation: Target value 60 is not present in the array



My Solution

1) Take N elements ( Size from user )
2) Take array from user
3) Take Key
4) if key == arr[i] then temp = i and i++
 */

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;


int solve(int arr[], int size, int key){
int temp = 2 << 31;
for (int i = 0; i < size; i++)
    {
        if (key==arr[i])
        {
            temp = i;
            i++;
        }

    }
    return temp;

}

int main()
{
    int size;
    int arr[size];
    int key;
    

    cout << "Enter the size of the array\n";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    cout << "Enter the key you want to find \n";
    cin >> key;

    int ans = solve(arr, size, key);
    if (ans == 2<<31)
    {
    cout<<"Element was not found\n";
    }
    else
    cout<<"Element was found at index" << ans;
    
    
}