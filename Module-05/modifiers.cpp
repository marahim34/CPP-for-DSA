#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";

    a = a + b;
    a = b;
    cout << a << endl;

    // To push a new character at the end
    a.push_back('A');

    // To delete the last character at the beginning
    a.pop_back();

    // Assignment oerator to give new value
    a.assign("Gello");

    cout << a << endl;

    // To delete a specific index
    string c = "Chandr0oGhona";
    // If we give only one index than it will delete the remaining paramaters from that starting point, Therefore we need to set two parameters, where the first one is the starting parameter and another parameter of specifying the number of indexes to be deleted from that starting point
    c.erase(6, 1);

    // Replace command: Where you should write the starting point and how many indexes to be modified.Then what to modify.
    c.replace(6, 1, "oooooo");

    cout << c << endl;
    return 0;
}