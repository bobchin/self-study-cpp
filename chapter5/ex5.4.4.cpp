#include <iostream>
using namespace std;

int f(int a)
{
    return a * a;
}

int f(int a, int b = 0)
{
    return a * b;
}

int main()
{
    cout << f(10, 2);   // f(int, int)を呼び出す
    cout << f(10);      // あいまい。f(int)とf(int, int)のどちらを呼び出せばいいか？

    return 0;
}