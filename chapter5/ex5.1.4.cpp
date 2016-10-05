#include <iostream>
using namespace std;

class myclass {
    int x;
public:
    myclass() { x = 0; }
    myclass(int n) { x = n; }
    int getx() { return x; }
    void setx(int n) { x = n; }
};

int main()
{
    myclass *p;
    myclass ob(10);

    // 初期値を受け取らないコンストラクタがないとエラーになる
    p = new myclass[10];
    if (!p) {
        cout << "メモリ割り当てエラー\n";
        return 1;
    }

    int i;

    for (i = 0; i < 10; i++)
    {
        p[i] = ob;
    }
    
    for (i = 0; i < 10; i++)
    {
        cout << "p[" << i << "]: " << p[i].getx() << "\n";
    }

    return 0;
}
