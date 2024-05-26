#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[10] = "Hello";
    char b[10] = "Gelo";

    strcpy(a, b);

    cout << a << endl;

    cout << strlen(a) << endl;

    return 0;
}