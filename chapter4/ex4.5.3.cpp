#include <iostream>
using namespace std;

int main()
{
    int *p;

    p = new int[5];
    if (!p) {
        cout << "メモリ割り当てエラー\n";
        return 1;
    }

    int i;
    for (i = 0; i < 5; i++)
    {
        p[i] = i;
    }
    for (i = 0; i < 5; i++)
    {
        cout << "整数型p[" << i << "]は: " << p[i] << "\n";
    }
    delete [] p;

    return 0;
}