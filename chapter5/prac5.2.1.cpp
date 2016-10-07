#include <iostream>
using namespace std;

class myclass
{
public:
    myclass();
    myclass(const myclass &o);
    myclass f();
};

// 通常のコンストラクタ
myclass::myclass()
{
    cout << "通常のコンストラクタ呼び出し\n";
}

// コピーコンストラクタ
myclass::myclass(const myclass &o)
{
    cout << "コピーコンストラクタ呼び出し\n";
}

myclass myclass::f()
{
    myclass temp;
    return temp;
}

int main()
{
    myclass obj;
    obj = obj.f();
    return 0;
}