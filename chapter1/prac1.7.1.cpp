#include <iostream>
#include <cmath>
using namespace std;

int sroot(int);
long sroot(long);
double sroot(double);

int main() {
    cout << "90.34の平方根は:" << sqrt(90.34) << "\n";
    cout << "90Lの平方根は:" << sqrt(90L) << "\n";
    cout << "90の平方根は:" << sqrt(90) << "\n";
    return 0;
}

int sroot(int n) {
    cout << "整数の平方根\n";
    return (int)sqrt((double)n);
}

long sroot(long n) {
    cout << "長整数の平方根\n";
    return (long)sqrt((double)n);
}

double sroot(double n) {
    cout << "倍精度浮動小数点数の平方根\n";
    return sqrt(n);
}



