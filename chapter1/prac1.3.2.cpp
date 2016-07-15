#include <iostream>
using namespace std;

int main() {
    double feet;

    do {
        cout << "フィートを入力してください(０で終了):";
        cin >> feet;
        cout << feet << "フィートは" << feet * 12 << "インチです。\n";
    } while (feet == 0.0);

    return 0;
}





