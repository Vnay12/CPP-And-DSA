/*
=========================================================
    Program: Linear Search Implementation in C++
    Purpose: Demonstrate a simple linear search algorithm
=========================================================

Steps:
1) Take array input from the user.
2) Take the key element to search.
3) Iterate through the array:
       - If key == arr[element], return the index.
4) In the main function:
       - If returned index != -1 → print element found with index.
       - Else → print element not found.



Complexity:
-----------------------------------------
Time Complexity  : O(n)   (linear scan)
Space Complexity : O(1)   (constant extra space)
-----------------------------------------
*/




#include <bits/stdc++.h>
using namespace std;




// Function Prototypes 
int linearSearch(int a[], int size, int key);








// Function Definitions 

int linearSearch(int a[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (key == a[i]) {
            return i;  // Element found, return index
        }
    }
    return -1;  // Element not found
}













int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];  // Array declaration



    // Reading Array from User
    cout << "Enter " << size << " elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    // Input: Array element
    int key;
    cout << "Enter the element you want to find: ";
    cin >> key;




    // Perform linearSearch
    int ans = linearSearch(arr, size, key);






    // Output result
    if (ans == -1) {
        cout << "Element not found in the array.\n";
    } else {
        cout << "Element found at index: " << ans << "\n";
    }

    return 0;
}
