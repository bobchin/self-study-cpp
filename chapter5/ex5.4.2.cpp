#include <iostream>
using namespace std;

void f(unsigned char c)
{
    cout << c;
}

void f(char c)
{
    cout << c;
}

int main()
{
    f('c');
    f(86);  // どっちのf()を呼び出せばいい？

    return 0;
}
