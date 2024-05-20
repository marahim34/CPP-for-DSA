#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[4];
    int *b = new int[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << b[i] << " ";
    // }

    delete[] a;

    a = new int[5];

    for (int i = 0; i < 4; i++)
    {
        a[i] = b[i];
    }
    delete[] b;

    a[3] = 40;
    a[4] = 99;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}