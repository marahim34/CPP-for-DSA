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
    Student *a = new Student(23, 233, 2.33);
    return a;
}

int main()
{
    Student *ans = fun();
    cout << ans->cls << " " << ans->roll << " " << ans->cgpa << endl;
    delete ans;
    // cout << ans->cls << " " << ans->roll << " " << ans->cgpa << endl;

    return 0;
}