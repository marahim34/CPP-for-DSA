#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[10];

    // taking input

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // output check
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}