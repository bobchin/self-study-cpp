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
    friend char *get_string(strtype *ob);
};

strtype::strtype(const char *ptr)
{
    len = strlen(ptr);
    p = (char *) malloc(len + 1);
    if (!p) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    strcpy(p, ptr);
}

strtype::~strtype()
{
    cout << "pを開放する\n";
    free(p);
}

void strtype::show()
{
    cout << p << " - 長さ: " << len;
    cout << "\n";
}

char *get_string(strtype *ob) {
    return ob->p;
}

int main()
{
    strtype s1("This is a test.");
    
    char *s;

    s1.show();
    s = get_string(&s1);

    cout << "ここに文字列s1が含まれる： " << s << "\n";

    return 0;
}