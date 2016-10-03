#include <iostream>
using namespace std;

class samp
{
    int i;
public:
    samp(int n) { i = n; }
    void set_i(int n) { i = n; }
    int get_i() { return i; }
};

void sqr_it(samp *o)
{
    o->set_i(o->get_i() * o-> get_i());
    cout << "iのコピーの値は" << o->get_i() << "\n";
}

int main()
{
    samp a(10);

    sqr_it(&a);

    cout << "今、main() は変更された: ";
    cout << a.get_i() << "\n";

    return 0;
}









