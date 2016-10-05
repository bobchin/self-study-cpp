#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype
{
    char *p;
public:
    strtype(const char *s);
    ~strtype() { delete [] p; }
    char *get() { return p; }
};

strtype::strtype(const char *s)
{
    int l;

    l = strlen(s) + 1;
    p = new char [l];

    if (!p) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    strcpy(p, s);
}

// 値渡しすると関数終了時にデストラクタがコールされるので
// p を解放してしまう
//void show(strtype x)
void show(strtype &x)
{
    char *s;
    s = x.get();
    cout << s << "\n";
}

int main()
{
    strtype a("Hello"), b("There");
    show(a);
    show(b);
    return 0;
}