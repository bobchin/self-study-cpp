#include <iostream>
using namespace std;

int main()
{
    int x;
    int &ref = x;

    x = 10;     // 同じこと
    ref = 10;   // 同じこと

    ref = 100;

    cout << x << ' ' << ref << "\n";

    return 0;
}