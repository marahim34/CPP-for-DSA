#include <bits/stdc++.h>
using namespace std;

namespace Mojnu
{
    int age = 33;
    void hello()
    {
        cout << "HEO NAMESPACE" << endl;
    }

}

namespace Sanju
{
    int age2 = 77;
    void hello()
    {
        cout << "Hello NA";
    }
}

using namespace Sanju;
int main()
{
    cout << Mojnu::age << endl;

    cout << age2 << endl;
    return 0;
}