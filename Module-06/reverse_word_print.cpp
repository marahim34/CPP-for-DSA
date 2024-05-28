#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        // This is for reverse print
        print(ss);
        cout << word << endl;

        // This is for normal sequence print
        cout << word << endl;
        print(ss);
    }
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    print(ss);

    return 0;
}