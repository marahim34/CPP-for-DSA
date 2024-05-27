#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // To enter s into stringstream group
    stringstream ss(s);
    string word;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;

    // instead of calling them separtely we can call then in a while loop

    int count = 0;

    while (ss >> word)
    {
        count++;
        cout << word << endl;
    }
    cout << count << endl;

    return 0;
}