#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // For finding the specific index
    cout << s[0] << endl;

    // function of cpp
    cout << s.at(0) << endl;

    // To know the last index
    cout << s[s.size() - 1] << endl;
    // however the cpp function for this
    cout << s.back() << endl;
    // cpp function for finding first index
    cout << s.front() << endl;

    return 0;
}