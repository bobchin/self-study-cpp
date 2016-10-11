#include <iostream>
using namespace std;

void space(int count)
{
    for ( ; count; count--) cout << ' ';
}

void space(int count, char ch)
{
    for ( ; count; count--) cout << ch;
}

int main()
{
    // 1つの整数仮引数を受け取るvoid関数へのポインタ
    void (*fp1)(int);

    // 1つの整数仮引数と1つの文字仮引数を受け取る
    // void関数へのポインタ
    void (*fp2)(int, char);

    fp1 = space;    // space(int) 関数のアドレスを取得
    fp2 = space;    // space(int, char) 関数のアドレスを取得

    fp1(22);
    cout << "|\n";

    fp2(30, 'x');
    cout << "|\n";

    return 0;
}