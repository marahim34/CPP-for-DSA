#include <bits/stdc++.h>
using namespace std;

long long *sort_it(long long n)
{
    long long *a = new long long[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<long long>());
    return a;
}

int main()
{
    long long n;
    cin >> n;

    long long *sorted_array = sort_it(n);
    for (long long i = 0; i < n; i++)
    {
        cout << sorted_array[i] << " ";
    }
    cout << endl;

    delete[] sorted_array;
    return 0;
}
