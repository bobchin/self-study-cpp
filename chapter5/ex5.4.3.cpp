#include <iostream>
using namespace std;

int f(int a, int b)
{
    return a + b;
}

// 本質的に曖昧な関数
int f(int a, int &b)
{
    return a - b;
}

int main()
{
    int x = 1, y = 2;
    cout << f(x, y);
    return 0;
}
