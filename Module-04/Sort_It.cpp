#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Ascending order
    sort(a, a + n);
    for (long long i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // Descending order
    sort(a, a + n, greater<long long>());
    for (long long i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
