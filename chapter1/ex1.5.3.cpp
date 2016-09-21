#include <iostream>
using namespace std;

class myclass {
public:
    // aを公開変数にしたので、set_a(), get_a()は必要なし
    int a;
};

int main()
{
    myclass obj1, obj2;

    // 非公開メンバにアクセスできないためエラーが出る
    obj1.a = 10;
    obj2.a = 99;

    cout << obj1.a << "\n";
    cout << obj2.a << "\n";

    return 0;
}