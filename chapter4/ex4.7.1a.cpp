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

// myclassオブジェクトを参照で渡す
void f(myclass &o)
{
    // 参照はポインタではないので "->" は使わず "." を使う
    cout << "受け取り " << o.id() << "\n";
}

int main()
{
    // 値渡しではないのでオブジェクトはコピーされないので
    // デストラクタも関数の終わりでコールされない
    myclass x(1);
    f(x);

    return 0;
}