#include <iostream>
#include <cstdlib>
using namespace std;

class array {
    int *p;
    int size;
public:
    array(int sz) {
        p = new int[sz];
        if (!p) exit(1);
        size = sz;
        cout << "「通常の」コンストラクタを使う\n";
    }
    ~array() { delete p; }

    // コピーコンストラクタ
    array(const array &a);

    void put(int i, int j) {
        if (i >= 0 && i < size) p[i] = j;
    }

    int get(int i) {
        return p[i];
    }
};

array::array(const array &a) {
    int i;

    size = a.size;
    p = new int[a.size];    // コピー用のメモリを割り当てる
    if (!p) exit(1);
    for (i = 0; i < a.size; i++) p[i] = a.p[i];
    cout << "コピーコンストラクタを使う\n";
}

int main()
{
    // 通常のコンストラクタを呼び出す
    array num(10);
    int i;

    // 配列に値を格納
    for (i = 0; i < 10; i++) num.put(i, i);

    // numの内容を表示
    for (i = 9; i >= 0; i--) cout << num.get(i);
    cout << "\n";

    // 他の配列を作成し、numを使用して初期化
    array x = num;  // コピーコンストラクタが呼び出される

    for (i = 0; i < 10; i++) cout << x.get(i);
    cout << "\n";

    // コピーコンストラクタは初期化のときだけ呼び出されるので
    // 以下では呼び出されない
    //array y(10);
    //y = num;
    //cout << y.get(i);   // エラー

    return 0;
}
