#include <iostream>
using namespace std;

union swapbytes
{
    unsigned char c[2];
    unsigned i;
    swapbytes(unsigned x);
    void swp();
    void show();
};

swapbytes::swapbytes(unsigned x)
{
    i = x;
}

void swapbytes::swp()
{
    unsigned char tmp;

    tmp = c[0];
    c[0] = c[1];
    c[1] = tmp; 
}

void swapbytes::show()
{
    int i, j;
    for (j = 1; j >= 0; j--) {
        for (i = 128; i; i >>= 1) {
            if (i & c[j]) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << " ";
    }
    cout << "\n";
}

int main()
{
    swapbytes ob(2);

    ob.show();
    ob.swp();
    ob.show();

    cout << ob.i << "\n";
    
    return 0;
}