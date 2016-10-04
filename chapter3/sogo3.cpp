#include <iostream>
using namespace std;

class base {
    int a;
public:
    void load_a(int n) { a = n; }
    int get_a() { return a; }
};

class derived : public base {
    int b;
public:
    void load_b(int n) { b = n; }
    int get_b() { return b; }
};

int main()
{
    derived ob1, ob2;

    ob1.load_a(10);
    ob1.load_b(20);

    ob2 = ob1;

    cout << "ここにob1のaとbがあります: ";
    cout << ob1.get_a() << ' ' << ob1.get_b() << "\n";

    cout << "ここにob2のaとbがあります: ";
    cout << ob2.get_a() << ' ' << ob2.get_b() << "\n";

    return 0;
}
