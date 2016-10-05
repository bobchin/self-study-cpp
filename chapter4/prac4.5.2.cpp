#include <iostream>
using namespace std;

int main()
{
    double *p;

    p = new double(-123.099);
    cout << *p << "\n";

    delete p;

    return 0;
}