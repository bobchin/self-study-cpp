#include <iostream>
using namespace std;

inline int myabs(int n) {
    cout << "整数用のmyabs()\n";
    return n < 0? -n: n;
}

inline long myabs(long n) {
    cout << "長整数用のmyabs()\n";
    return n < 0? -n: n;
}

inline double myabs(double n) {
    cout << "倍精度浮動小数点数用のmyabs()\n";
    return n < 0? -n: n;
}

int main() {
    cout << "-10の絶対値:" << myabs(-10) << "\n\n";
    cout << "-10Lの絶対値:" << myabs(-10L) << "\n\n";
    cout << "-10.01の絶対値:" << myabs(-10.01) << "\n\n";
    return 0;
}


