/*
 This is Linear Search using Vector

 */

#include <bits/stdc++.h>
using namespace std;

int Linearsearch(vector<int> &a, int key){
    for (int i = 0; i < a.size(); i++) {
        if (key == a[i]) {
            return i;  // Element found, return index
        }
    }
    return -1;  // Element not found
}

int main()
{
    int size, element, key;
    vector<int> v;
    cout << "Enter the size of array \n";
    cin >> size;
    cout << "Enter array elements \n";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    cout<<"Array: "<< " ";
    for(int x : v) cout<< x << " " ;

    cout<<"Enter the key to find in array";
    cin>>key;

    int ans = Linearsearch(v, key);

    if(ans != -1){
        cout<<"Element was found at : " << ans << " ";
    }
    else cout<< "Element was not found \n";



}


/*
Approach: Linear Search Using STL Vector : Dynamic Array
Time Complexity: O(N)
Space Complexity: O(1)


NOTE : C++ STL has Linear Search Algorithm : find()
                                
find(v.begin(), v.end(), key);


 */