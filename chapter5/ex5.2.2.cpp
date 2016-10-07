// このプログラムはエラーになります

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
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

    p = new char[l];
    if (!p) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    strcpy(p, s);
}

void show(strtype x)
{
    char *s;
    s = x.get();
    cout << s << "\n";
}

int main()
{
    strtype a("Hello"), b("There");

    /*
    コピーコンストラクタを定義していないので
    show()に渡したときにコピーが生成され、
    関数終了時に破棄されるのでx.pが解放されてしまう。
    */
    show(a);
    show(b);

    return 0;
}