#include <iostream>
using namespace std;

// 戻り値だけ異なるのはオーバーロードできない！！

void f1(int a);
double f1(int a);

int main()
{
    f1(10);
    f1(10, 20);

    return 0;
}

void f1(int a)
{
    cout << "void f1(int a)内\n";
    cout << "a:" << a << "\n";
}

double f1(int a)
{
    cout << "double f1(int a)内\n";
    cout << "a:" << a << "\n";
}
