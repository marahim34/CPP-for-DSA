#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }

    void hello()
    {
        cout << "Hello from Rakib" << endl;
        cout << name << " " << age << endl;
    }
};

int main()
{
    Person rakib("Rakib Mia", 24);
    rakib.hello();
    cout << rakib.name << " " << rakib.age;
    return 0;
}