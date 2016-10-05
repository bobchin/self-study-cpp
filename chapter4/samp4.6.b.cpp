#include <iostream>
using namespace std;

void f(int &n); // 参照仮引数を使う
void f2(int &n);

int main()
{
    int i = 0;

    f(i);
    cout << "iの新しい値：" << i << "\n";

    f2(i);
    cout << "iの新しい値：" << i << "\n";

    return 0;
}

void f(int &n) {
    // 次の文は*が必要ない
    n = 100;   // nが指す整数に100を代入
}

void f2(int &n) {
    // 値がインクリメントされる
    n++;
}
