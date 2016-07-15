#include <iostream>
using namespace std;

int rotate(int);
long rotate(long);

int main() {
    int a;
    long b;

    a = 0x8000;
    b = 8;
    cout << a << " => " << rotate(a) << "\n";
    cout << b << " => " << rotate(b) << "\n";

    return 0;
}

int rotate(int i) {
    int x;
    // intは4バイトt=32ビットなので、32ビット目の値を取得
    x = (i & 0x80000000)? 1: 0;
    i = i << 1;
    i += x;
    return i;
}

long rotate(long i) {
    int x;
    // longは4バイトt=32ビットなので、32ビット目の値を取得
    x = (i & 0x80000000)? 1: 0;
    i = i << 1;
    i += x;
    return i;
}