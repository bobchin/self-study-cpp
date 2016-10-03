#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class dice {
    int val;
public:
    void roll();
};

void dice::roll() {
    val = (rand() % 6) + 1;
    cout << val << "\n";
}

int main()
{
    dice d;

    for (int i; i < 10; i++) {
        cout << (i + 1) << "回目: ";
        d.roll();
    }
    return 0;
}