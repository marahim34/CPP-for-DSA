#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // Range based/shortcut for loop
    // Range based for loop only give the elements not the indexes. If we need the indexes, we have to execute normal for loop;
    for (char a : s)
    {
        cout << a << endl;
    }
    return 0;
}