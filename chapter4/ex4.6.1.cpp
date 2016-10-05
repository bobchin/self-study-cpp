#include <iostream>
using namespace std;

void swapargs(int &x, int &y);

int main()
{
    int i, j;

    i = 10;
    j = 19;

    cout << "変換前: ";
    cout << "i:" << i << ", ";
    cout << "j:" << j << "\n";

    swapargs(i, j);

    cout << "変換後: ";
    cout << "i:" << i << ", ";
    cout << "j:" << j << "\n";

    return 0;
}

void swapargs(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
