#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
    int len;
public:
    strtype();
    strtype(const char *s, int l);
    char *getstring() { return p; }
    int getlength() { return len; }
};

strtype::strtype()
{
    len = 255;
    p = new char[len];
    if (!p) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    *p = '\0';
}

strtype::strtype(const char *s, int l)
{
    if (strlen(s) > l) {
        cout << "少ないメモリの割り当て\n";
        exit(1);
    }

    len = l;
    p = new char[len];
    if (!p) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    strcpy(p, s);
}

int main()
{
    strtype s1;
    strtype s2("This is a test.", 100);

    cout << "s1: " << s1.getstring() << " - 長さ: " << s1.getlength() << "\n";
    cout << "s2: " << s2.getstring() << " - 長さ: " << s2.getlength() << "\n";

    return 0;
}