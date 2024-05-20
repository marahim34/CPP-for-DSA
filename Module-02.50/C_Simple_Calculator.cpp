#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;

    cin >> x >> y;

    long long sum = x + y;
    long long multiplication = x * y;
    long long subtraction = x - y;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << multiplication << endl;
    cout << x << " - " << y << " = " << subtraction << endl;

    return 0;
}