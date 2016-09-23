#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype
{
    char *p;
    int len;
public:
    strtype(const char *ptr);
    ~strtype();
    void show();
};

strtype::strtype(const char *ptr)
{
    len = strlen(ptr);
    p = (char *)malloc(len + 1);
    if (!p) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    strcpy(p, ptr);
}

strtype::~strtype()
{
    cout << "p を解放する\n";
    free(p);
}

void strtype::show()
{
    cout << p << " - 長さ：" << len << "\n";
}


int main() {
    strtype s1("This is a test."), s2("I like C++.");

    s1.show();
    s2.show();

    return 0;
}



