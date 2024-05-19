#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    // in c programming how we call EOF
    // int a, b;
    // while (scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d %d\n", a, b);
    // }

    // in c++
    int a, b;
    while (cin >> a >> b)
    {
        cout << a << " " << b << endl;
    }

    return 0;
}