#include <bits/stdc++.h>
using namespace std;

int main()
{
    char *s = new char[100001];

    while (cin.getline(s, 100001))
    {
        int n = strlen(s);

        char *temp = new char[n + 1];
        int tempIndex = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ')
            {
                char currentChar = s[i];
                temp[tempIndex] = currentChar;
                tempIndex = tempIndex + 1;
            }
        }

        temp[tempIndex] = '\0';

        sort(temp, temp + tempIndex);

        cout << temp << endl;

        delete[] temp;
    }

    delete[] s;

    return 0;
}
