#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int maximum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    cout << maximum << endl;
}