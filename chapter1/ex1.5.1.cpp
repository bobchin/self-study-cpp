#include <iostream>
using namespace std;

class myclass {
public:
    int a;

    void set_a(int num);
    int get_a();
};

void myclass::set_a(int num)
{
    a = num;
}

int myclass::get_a()
{
    return a;
}

int main()
{
    myclass obj1, obj2;

    obj1.a = 10;
    obj2.a = 99;

    // obj1.set_a(10);
    // obj2.set_a(99);

    cout << obj1.get_a() << "\n";
    cout << obj2.get_a() << "\n";

    return 0;
}