#include <iostream>
using namespace std;

class line {
    int len;
public:
    line(int l);
    ~line();
};

line::line(int l) {
    len = l;
    int i;
    for (i = 0; i < len; i ++) {
        cout << "*";
    }
    cout << "\n";
}

line::~line() {
    len = 0;
}

int main() {
    line l(20);
    return 0;
}