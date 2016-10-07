#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
public:
    strtype(const char *s);
    strtype(const strtype &o);
    ~strtype() { cout << "delete:" << p << endl; delete [] p; }
    char *get() { return p; }
};

// 通常のコンストラクタ
strtype::strtype(const char *s)
{
    int l;
    l = strlen(s) + 1;

    p = new char[l];
    if (!p) {
        cout << "メモリ割り当てエラー" << endl;
        exit(1);
    }
    strcpy(p, s);
}

// コピーコンストラクタ
strtype::strtype(const strtype &o)
{
    cout << "コピーコンストラクタ: 長さ=" << strlen(o.p) << endl;
    int l;
    l = strlen(o.p) + 1;
    p = new char[l];
    if (!p) {
        cout << "メモリ割り当てエラー" << endl;
        exit(1);
    }
    strcpy(p, o.p);
}

void show(strtype x)
{
    char *s;
    s = x.get();
    cout << "Show: " << s << endl;
}

int main()
{
    strtype a("HelloWorld"), b("There");

    show(a);
    show(b);

    return 0;
}