#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";

    a = a + b;
    cout << a << endl;

    // To push a new character at the end
    a.push_back('A');

    // To delete the last character at the beginning
    a.pop_back();
    cout << a << endl;
    return 0;
}