#include <iostream>
using namespace std;

class samp
{
    int a, b;
public:
    samp(int n, int m) { a = n; b = m; }
    int get_a() { return a; }
    int get_b() { return b; }
};

int main()
{
    samp ob[4] = {
        samp(1, 2),
        samp(3, 4),
        samp(5, 6),
        samp(7, 8)
    };

    int i;
    samp *p;
    p = ob;

    for (i = 0; i < 4; i++)
    {
        cout << p->get_a() << " " << p->get_b() << "\n";
        p++;
    }


    return 0;
}