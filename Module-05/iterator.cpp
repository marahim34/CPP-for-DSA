#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Loop for iteration
    for (int i = 0; i < s.size(); i++)
    {
        // cout << s[i] << endl;
    }

    // c++ functions for iteration
    // s.begin and s.end: You have to use those functions to know the first and last index. Always remember to use * to deference those
    cout << *s.begin() << endl;
    cout << *(s.end() - 1) << endl;

    // iterator of c++
    string::iterator it;
    // In the latest compilers we can use auto instead of     string::iterator it
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    cout << s << endl;
    return 0;
}