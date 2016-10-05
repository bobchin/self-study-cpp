#include <iostream>
using namespace std;

int &f();   // 参照を返す
int x;

int main()
{
    f() = 100; // f()の返す参照に100を代入
    cout << x << "\n";
    return 0;
}

int &f()
{
    return x;
}