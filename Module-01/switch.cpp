#include <iostream>
using namespace std;

int main()
{
    int x = 6;

    switch (x)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    default:
        cout << "Kichu mile nai";
    }

    // if (x == 1)
    // {
    //     cout << "One";
    // }
    // else if (x == 2)
    // {
    //     cout << "Two";
    // }
    // else if (x == 3)
    // {
    //     cout << "Three";
    // }
    // else if (x == 4)
    // {
    //     cout << "Four";
    // }

    return 0;
}