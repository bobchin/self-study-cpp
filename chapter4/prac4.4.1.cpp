#include <iostream>
using namespace std;

int main()
{
    float *f;
    long *l;
    char *c;

    f = new float;
    l = new long;
    c = new char;
    if (!f || !l || !c) {
        cout << "メモリ割り当てエラー\n";
        return 1;
    }

    *f = 123.456;
    *l = 1234567890;
    *c = 'Z';

    cout << "float: " << *f << "\n";
    cout << "long: " << *l << "\n";
    cout << "char: " << *c << "\n";

    delete f;
    delete l;
    delete c;

    return 0;
}