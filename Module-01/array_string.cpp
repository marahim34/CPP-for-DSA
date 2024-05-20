#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    char s[100];
    int a;
    cin >> a;
    // cin >> s;
    // method for getting full string
    // fgets(s, 101, stdin);
    // another method
    getchar();
    cin.getline(s, 100);
    cout << a << endl;
    cout << s << endl;
    // cout << strlen(s) << endl;

    return 0;
}