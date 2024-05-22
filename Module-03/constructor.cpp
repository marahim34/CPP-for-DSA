#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    double cgpa;
    Student(int cls, int roll, double cgpa)
    {
        // (*this).cls = cls;
        // (*this).roll = roll;
        // (*this).cgpa = cgpa;

        // arrow sign is used to dereference -> sign
        this->cls = cls;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};

int main()
{
    Student a(33, 7, 3.45);
    Student b(34, 4, 3.35);

    cout << a.cls << " " << a.roll << " " << a.cgpa << endl;
    cout << b.cls << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}