#include <bits/stdc++.h>
using namespace std;

int main()
{
    int value;
    cin >> value;

    int *ptr = &value;

    int dereferenced_value = *ptr;

    cout << dereferenced_value << endl;
    return 0;
}