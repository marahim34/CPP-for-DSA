#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    string a = "Chatu Matu";
    // To know the length of the string
    cout << s.size() << endl;
    // To know the max size the string can kept
    cout << s.max_size() << endl;
    // To clear the string
    a.clear();
    cout << a << endl;

    // string.empty to know whether the string is empty or not, meaning whether the length is zero or not
    if (s.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    // To increase or decrease the size of string we use resize
    string c;
    cin >> c;

    s.resize(5);

    cout << s << " " << s.size() << endl;

    s.resize(20, 'x');
    cout << s << " " << s.size() << endl;

    return 0;
}