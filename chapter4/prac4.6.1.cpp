#include <iostream>
using namespace std;

void neg_p(int *p)
{
    *p = - *p;
}
void neg_s(int &p)
{
    p = -p;
}

int main()
{
    int i, j;
    i = 123;
    j = -987;

    cout << "ポインタ仮引数:\n";
    neg_p(&i);
    neg_p(&j);
    cout << "i: " << i << "\n";
    cout << "j: " << j << "\n";

    cout << "参照仮引数:\n";
    neg_s(i);
    neg_s(j);
    cout << "i: " << i << "\n";
    cout << "j: " << j << "\n";

    return 0;
}