#include <iostream>
using namespace std;

struct Student
{
    int id;
    char name[101];
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student a, b, c, max_student;

        cin >> a.id >> a.name >> a.section >> a.total_marks;
        cin >> b.id >> b.name >> b.section >> b.total_marks;
        cin >> c.id >> c.name >> c.section >> c.total_marks;

        max_student = a;

        if (b.total_marks > max_student.total_marks ||
            (b.total_marks == max_student.total_marks && b.id < max_student.id))
        {
            max_student = b;
        }

        if (c.total_marks > max_student.total_marks ||
            (c.total_marks == max_student.total_marks && c.id < max_student.id))
        {
            max_student = c;
        }

        cout << max_student.id << " " << max_student.name << " " << max_student.section << " " << max_student.total_marks << endl;
    }

    return 0;
}
