#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string a, b;
    while (t--)
    {
        cin >> a >> b;

        int length_a = a.size();
        int length_b = b.size();

        int max_length = max(length_a, length_b);
        string result = "";

        for (int i = 0; i < max_length; i++)
        {
            if (i < length_a)
            {
                result = result + a[i];
            }
            if (i < length_b)
            {
                result = result + b[i];
            }
        }
        cout << result << endl;
    }
    return 0;
}