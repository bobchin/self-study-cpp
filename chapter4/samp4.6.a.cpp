/**
 * 参照(reference)
 * ３つの用途
 *
 * 1. 関数の引数として渡す
 * 2. 関数の返り値として返す
 * 3. 独立した参照を作成する
 */
#include <iostream>
using namespace std;

void f(int *n); // ポインタ仮引数を使う

int main()
{
    int i = 0;
    // ポインタを渡すことで参照呼び出しを手作業でしている
    f(&i);

    cout << "iの新しい値：" << i << "\n";

    return 0;
}

void f(int *n) {
    *n = 100;   // nが指す整数に100を代入
}