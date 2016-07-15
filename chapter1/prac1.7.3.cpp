#include <iostream>
#include <cctype>
using namespace std;

char min(char, char);
int min(int, int);
double min(double, double);

int main() {
    cout << "最小値は：" << min('x', 'A') << "\n";
    cout << "最小値は：" << min(10, 20) << "\n";
    cout << "最小値は：" << min(0.2234, 99.2) << "\n";
    return 0;
}


char min(char a, char b) {
    return (tolower(a) < tolower(b))? a: b;
}

int min(int a, int b) {
    return (a < b)? a: b;
}

double min(double a, double b) {
    return (a < b)? a: b;
}
