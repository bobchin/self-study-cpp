#include <iostream>
using namespace std;

// 無名共用体

int main() {

    // value と byte は通常の変数のように使用できる
    // 通常のローカル変数と同じスコープを持つので
    // ローカル変数と同じ名前を使用できない！
    union
    {
        unsigned char bytes[8];
        double value;
    };
    int i;
    value = 859345.324;

    for (i = 0; i < 8; i++) {
        cout << (int)bytes[i] << " \n";
    }

    return 0;
}