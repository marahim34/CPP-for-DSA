#include <bits/stdc++.h>
using namespace std;

int main()
{
    int value;
    cin >> value;

    int *ptr = &value;
    // The & operator is used to get the address of a variable. For example, &value gives you the address of the variable value.

    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}