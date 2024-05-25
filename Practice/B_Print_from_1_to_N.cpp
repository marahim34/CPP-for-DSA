#include <bits/stdc++.h>
using namespace std;

void printing_n(int n)
{
    if (n == 0)
        return;
    printing_n(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;

    printing_n(n);
    return 0;
}