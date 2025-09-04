/*
1) first we have to take array input
2) get the key element from the user
3) Iterat thru array if key == arr[element ] then return 1 or return 0
4) coming to main scope if ans is 1 then print element is present or else no
 */

#include <bits/stdc++.h>
using namespace std;

int linearsearch(int a[], int size, int key){
    for (int i = 0; i < size; i++) {
        if(key==a[i]){
            return i;
        }
        
    }
    return -1;
}

int main()
{
    int x;
    cout<<"Enter the size of array\n";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < x; i++) {
     cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to find";
    cin>>key;

   int ans = linearsearch(arr,x,key);
   if(ans==-1){
    cout<<"Element has not found";
   }
   else{
    cout<<"Element was found at index " + ans;
   }
}

/*
1) Time Complexity 
2) Space Complexity 

 */