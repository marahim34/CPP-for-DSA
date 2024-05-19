#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int f = min(a, b);
    int g = max(a, b);

    int minimum = min({a, b, c, d});
    int maximum = max({a, b, c, d});

    cout << minimum << endl;
    cout << maximum << endl;
    cout << f << endl;
    cout << g << endl;

    // cout << a << b << c;

    // if (a < b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout << b;
    // }

    return 0;
}