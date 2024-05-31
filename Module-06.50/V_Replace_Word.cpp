#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int index = s.find("EGYPT");
    int count = 0;

    while (index != -1)
    {
        s.replace(index, 5, " ");
        count++;
        index = s.find("EGYPT", index + 1);
    }

    cout << s << endl;

    return 0;
}
