#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double cgpa;
    Student(int roll, int cls, double cgpa)
    {

        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

Student *fun()
{
    Student a(23, 233, 2.33);
    Student *p = &a;
    return p;
}

int main()
{
    Student *ans = fun();
    cout << ans->cls << " " << ans->roll << " " << ans->cgpa << endl;
    return 0;
}