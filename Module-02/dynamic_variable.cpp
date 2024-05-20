#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    // static variable
    // int x = 10;

    // dynamic variable
    int *a = new int;
    *a = 10;

    // The value of a is the address of int
    cout << a << endl;
    // If you want the value of a, just dereference it
    cout << *a << endl;

    float *b = new float;
    *b = 9484.448484;
    cout << b << endl;
    cout << *b << endl;
    cout << fixed << setprecision(5) << *b << endl;

    return 0;
}