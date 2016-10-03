#include <iostream>
using namespace std;

class pr2;

class pr1
{
    int printing;
public:
    pr1() { printing = 0; };
    void set_print(int status) { printing = status; }
    friend int inuse(pr1 ob1, pr2 ob2);
};

class pr2
{
    int printing;
public:
    pr2() { printing = 0; };
    void set_print(int status) { printing = status; }
    friend int inuse(pr1 ob1, pr2 ob2);
};

int inuse(pr1 ob1, pr2 ob2)
{
    int ret;

    if (ob1.printing == 1 || ob2.printing == 1) {
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

int main()
{
    pr1 ob1;
    pr2 ob2;

    if (!inuse(ob1, ob2)) {
        cout << "プリンタはアイドル状態です\n";
    } else {
        cout << "プリンタは使用中です\n";
    }

    cout << "ob1は印字設定中です\n";
    ob1.set_print(1);
    if (!inuse(ob1, ob2)) {
        cout << "プリンタはアイドル状態です\n";
    } else {
        cout << "プリンタは使用中です\n";
    }

    cout << "ob1を解除\n";
    ob1.set_print(0);
    if (!inuse(ob1, ob2)) {
        cout << "プリンタはアイドル状態です\n";
    } else {
        cout << "プリンタは使用中です\n";
    }

    cout << "ob2は印字設定中です\n";
    ob2.set_print(1);
    if (!inuse(ob1, ob2)) {
        cout << "プリンタはアイドル状態です\n";
    } else {
        cout << "プリンタは使用中です\n";
    }

    cout << "ob1は印字設定中です\n";
    ob1.set_print(1);
    if (!inuse(ob1, ob2)) {
        cout << "プリンタはアイドル状態です\n";
    } else {
        cout << "プリンタは使用中です\n";
    }
    
    return 0;
}