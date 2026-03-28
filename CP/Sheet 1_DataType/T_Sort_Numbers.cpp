#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << endl;

    cout << endl
         << a << endl
         << b << endl
         << c;
}