/*
 This is Binary Search Code

    Functions:
        1) Binary Search
        2) First Occurance & Last Occurance
        3) Count Number of Occurance
        4) Rotated Sorted Array

    Note : Array should be sorted : Must Condition

 */

#include <bits/stdc++.h>
using namespace std;


int BinarySearch(int a[], int key, int size)
{
    int left, right, mid;
    left = 0;  // index 
    right = size - 1; // index
    


    while (left <= right)
    {
        mid = (left + right) / 2; // index 
        if (a[mid] == key)
            return mid;

        if (a[mid] < key)
            left = mid + 1;
        else
            right = mid - 1; 
           
    }
    return -1;
}
/*
 1) Array has to be sorted
 2) If duplicate present : it will return any one of index where the key matches 
 */



int BinarySearchLastOccurance(int a[], int key, int size)
{
    int left, right, mid;
    left = 0;  // index 
    right = size - 1; // index
    


    while (left <= right)
    {
        mid = (left + right) / 2; // index 
        if (a[mid] == key && a[mid + 1] == key)
            return mid + 1;
        else if (a[mid] == key && a[mid + 1] != key)
        {
            return mid;
        }
        

        if (a[mid] < key)
            left = mid + 1;
        else
            right = mid - 1; 
           
    }
    return -1;
}


int main()
{
    int size, key, l, r, mid;
    cout << "Enter the size of array \n";
    cin >> size;
    int a[size];
    cout << "Enter array \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    // Print array
    cout << "Array:" << " ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }

    cout<<"\n";
    cout<<"Elemet to be found \n";
    cin >> key;


    int ans = BinarySearch(a, key, size);
    if(ans != -1) cout<<"Element was at index " << ans << " ";
    else cout<< "Element was not found ";

    cout<<"\n";
    int ans2 = BinarySearchLastOccurance(a, key, size);
    if(ans2 != -1) cout<<"Element was at index " << ans2 << " ";
    else cout<< "Element was not found ";

}

/*
Approach: Binary Search on Sorted Array
Time Complexity: O(Log n)
Space Complexity: O(1)

Why Log N : If N are total elements and we have to check how many times (k) we can divide N by 2 until we have 1 
N / 2^ k = 1

 */