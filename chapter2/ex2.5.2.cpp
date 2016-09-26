#include <iostream>
using namespace std;

// 共用体のサンプル
// d と c が同じものを指している
// 値の設定は d(double) を使用し、
// ビット参照するときは c(char配列) を使用している 

union bits
{
    bits(double n);
    void show_bits();
    double d;
    unsigned char c[sizeof(double)];
};

bits::bits(double b)
{
    d = b;
}

void bits::show_bits()
{
    int i, j;

    // double 型8バイトのループ
    for (j = sizeof(double) - 1; j >= 0; j--) {
        cout << "バイト単位のビットパターン " << j << ": ";
        
        // 各バイトのビットを上位から表示
        for (i = 128; i; i >>= 1) {
            if (i & c[j]) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << "\n";
    }
}

int main() {
    bits ob(1991.829);
    ob.show_bits();
    return 0;
}