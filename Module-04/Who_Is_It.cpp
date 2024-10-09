#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int id, marks;
        string name;
        char section;

        int max_mark = -1;
        int max_id = INT_MIN;
        string max_name = "";
        char max_section = ' ';

        for (int j = 0; j < 3; j++)
        {
            cin >> id >> name >> section >> marks;
            // cout << id << " " << name << " " << section << " " << marks << endl;

            if (marks > max_mark || (marks == max_mark && id < max_id))
            {
                max_mark = marks;
                max_id = id;
                max_name = name;
                max_section = section;
            }
        }
        cout << max_id << " " << max_name << " " << max_section << " " << max_mark << endl;
    }
    return 0;
}