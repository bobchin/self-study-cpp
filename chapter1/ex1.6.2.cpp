#include <iostream>
using namespace std;

// int sum(int, int);

int main() {
    int a, b, c;

    cout << "２つの数字を入力：";
    cin >> a >> b;
    c = sum(a, b);

    cout << "合計：" << c;

    return 0;
}

int sum(int a, int b) {
    return a + b;
}






