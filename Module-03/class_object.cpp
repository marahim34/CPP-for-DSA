#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a;
    a.roll = 332;
    a.cgpa = 5.33;
    char tmp[100] = "Forid";
    strcpy(a.name, tmp);

    cout << a.name << " " << a.cgpa << " " << a.roll << endl;
    return 0;
}