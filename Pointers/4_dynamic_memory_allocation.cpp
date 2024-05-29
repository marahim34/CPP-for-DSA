#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Dynamic memory allocation allows you to allocate memory during runtime using pointers. This is done using new and delete operators.

    int *ptr = new int;
    cin >> *ptr;

    cout << *ptr << endl;
    // For deleting single variable,just use the keyword delete followed by ptr;
    delete ptr;

    // Accessing ptr after delete leads to undefined behavior, so avoid doing this.
    cout << *ptr << endl;

    return 0;
}