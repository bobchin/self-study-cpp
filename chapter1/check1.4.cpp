#include <iostream>
using namespace std;

int pow(int, int);

int main() {
    int a, b;

    cout << "２つの整数を入力してください";
    cin >> a >> b;

    cout << a << "の" << b << "乗は" << pow(a, b) << "\n";
    return 0;
}

int pow(int value, int pow) {
    int i, result;
    result = 1;
    for (i = 0; i < pow; i++) {
        result *= value;
    }
    return result;
}
