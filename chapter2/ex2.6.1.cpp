#include <iostream>
using namespace std;

class samp {
    int i, j;
public:
    samp(int a, int b);
    int divisible();
};

samp::samp(int a, int b)
{
    i = a;
    j = b;
}

inline int samp::divisible()
{
    return !(i % j);
}

int main() {
    samp ob1(10, 2), ob2(10, 3);

    if (ob1.divisible()) {
        cout << "10は2で割り切れる\n";
    } else {
        cout << "10は2で割り切れない\n";
    }
    if (ob2.divisible()) {
        cout << "10は3で割り切れる\n";
    } else {
        cout << "10は3で割り切れない\n";
    }

    return 0;
}