#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;

    while (t--)
    {
        cin >> s;
        int size = 3;

        int index1 = s.find("010");
        int index2 = s.find("101");

        int count = 0;

        while (index1 != -1)
        {
            count++;
            index1 = s.find("010", index1 + size);
        }

        while (index2 != -1)
        {
            count++;
            index2 = s.find("101", index2 + size);
        }

        if (count > 0)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}
