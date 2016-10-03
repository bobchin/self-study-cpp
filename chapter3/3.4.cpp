#include <iostream>
using namespace std;

class myclass
{
    int n, d;
public:
    myclass(int i, int j) { n = i, d = j; }
    friend int isfactor(myclass ob);
};

// フレンド関数を定義する
// friendキーワードを使用していないことに注意
int isfactor(myclass ob)
{
    if (!(ob.n % ob.d)) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    myclass ob1(10, 2), ob2(13, 3);

    cout << "2は10の因数";
    if (isfactor(ob1)) {
        cout << "です。\n";
    } else {
        cout << "ではない。\n";
    }

    cout << "3は13の因数";
    if (isfactor(ob2)) {
        cout << "です。\n";
    } else {
        cout << "ではない。\n";
    }

    return 0;
}

