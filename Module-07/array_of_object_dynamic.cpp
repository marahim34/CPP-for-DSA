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

    // Student student[n];
    Student *student = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, student[i].name);
        // getchar();
        cin >> student[i].roll >> student[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << student[i].name << " " << student[i].roll << " " << student[i].marks << endl;
    }

    return 0;
}