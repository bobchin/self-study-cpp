#include <iostream>
using namespace std;

int main()
{
    int *p;

    p = new int;
    if (!p) {
        cout << "メモリ割り当てエラー\n";
        return 1;
    }

    *p = 1000;
    cout << "pが指している整数型は: " << *p << "\n";
    delete p;

    return 0;
}