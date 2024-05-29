#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> student[i].name >> student[i].roll >> student[i].marks;
    }

    // int min_marks = INT_MAX;
    // int min_roll = INT_MAX;
    // string min_name;
    Student min1;
    int min_marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (student[i].marks < min1.marks)
        {
            // min_marks = student[i].marks;
            // min_name = student[i].name;
            // min_roll = student[i].roll;
            min1 = student[i];
        }
    }

    // cout << min_name << " " << min_roll << " " << min_marks;
    cout << min1.name << " " << min1.roll << " " << min1.marks;

    return 0;
}