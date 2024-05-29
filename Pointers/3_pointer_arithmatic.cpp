#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // The name of an array (e.g., arr) in most contexts acts as a pointer to the first element of the array.
    // Arrays are automatically pointers to the first index
    int *ptr = arr;

    cout << *ptr << endl;

    // ptr++;

    // cout << *ptr << endl;
    int count = *ptr;
    for (int i = 0; i < n - 1; i++)
    {
        ptr++;
        // cout << ptr << endl;
        cout << *ptr << endl;
        count = count + *ptr;
    }
    cout << count << endl;

    return 0;
}