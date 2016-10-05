#include <iostream>
using namespace std;

class myclass
{
    int who;
public:
    myclass(int n) {
        who = n;
        cout << "コンストラクタ呼び出し" << who << "\n";
    }
    ~myclass() { cout << "デストラクタ呼び出し" << who << "\n"; }
    int id() { return who; }
};

// myclassオブジェクトを値渡しする
void f(myclass o)
{
    cout << "受け取り " << o.id() << "\n";
}

int main()
{
    // 値渡ししているのでオブジェクトがコピーされ
    // デストラクタが関数の終わりでコールされる
    myclass x(1);
    f(x);

    return 0;
}