#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int;
    cout << "Fun: " << a << endl;
    *a = 299;
    return a;
}

int main()
{
    int *p = fun();
    cout << "Main: " << p << endl;
}