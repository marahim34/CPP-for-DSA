#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *Moga = new Person("Moga", 24);
    Person *Yoga = new Person("Yoga", 33);

    // Moga->name = Yoga->name;
    // Moga->age = Yoga->age;
    // delete Yoga;

    *Moga = *Yoga;
    delete Yoga;

    cout << Moga->name;

    cout << Moga->name;
    return 0;
}