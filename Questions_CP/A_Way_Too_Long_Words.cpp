#include <bits/stdc++.h>
using namespace std;

int main()
{
    int wordsnumbers;
    string words;
    cin >> wordsnumbers;
    while (wordsnumbers--)
    {
        cin >> words;
        if(words.size() <= 10){
            cout << words << endl;
        }
        else{
            cout << words[0] << words.size() - 2 << words[words.size() - 1] << endl;
        }
    }
    return 0;
}