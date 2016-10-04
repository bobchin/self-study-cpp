#include <iostream>
using namespace std;

class myclass {
    int num;
public:
    myclass(int x) { num = x; }
    friend int isneg(myclass ob);
};

int isneg(myclass ob) {
    return (ob.num < 0)? 1: 0;
}

int main()
{
    myclass ob1(123), ob2(-123);

    if (isneg(ob1)) {
        cout << "ob1は負\n";
    } else {
        cout << "ob1は０以上\n";
    }

    if (isneg(ob2)) {
        cout << "ob2は負\n";
    } else {
        cout << "ob2は０以上\n";
    }

    return 0;
}