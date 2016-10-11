#include <iostream>
#include <cstdlib>
using namespace std;

long mystrtol(const char *start, char **end, int base = 10)
{
    return strtol(start, end, base);
}

int main()
{
    long x;
    const char *s1 = "100234";
    char *p;

    x = mystrtol(s1, &p, 16);
    cout << "基数16: " << x << "\n";
    
    x = mystrtol(s1, &p, 10);
    cout << "基数10: " << x << "\n";
    
    x = mystrtol(s1, &p);
    cout << "デフォルトの基数10: " << x << "\n";
    
    return 0;
}

