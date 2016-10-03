#include <iostream>
using namespace std;

class convert {
    double feet, inch;
public:
    convert(double f) {
        feet = f;
        inch = f * 12;
        cout << feet << "フィートは" << inch << "インチです。\n";
    }
};

int main()
{
    convert c(12);

    return 0;
}
