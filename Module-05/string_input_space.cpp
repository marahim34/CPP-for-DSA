#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    string s;
    // cin >> s;

    // cin.getline would not work here
    // cin.getline(s, 100); It works only with char[]

    // for c++ they have a new syntax

    // REMEMBER THAT GETLINE HAS A PROBLEM WITH DEALING WITH ENTER. THEREFORE WE USE
    getline(cin, s);
    cout << x << endl;
    cout << s << endl;
    cout << s.size() << endl;
    return 0;
}