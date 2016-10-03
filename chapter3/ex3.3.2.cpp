#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class samp
{
    char *s;
public:
    samp() { s = '\0'; }
    ~samp() { if(s) free(s); cout << "sを解放する\n"; }
    void show() { cout << s << "\n"; }
    void set(char *str);
};

void samp::set(char *str)
{
    s = (char *) malloc(strlen(str) + 1);
    if (!s) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    strcpy(s, str);
}

// strのスコープは関数内なので
// 関数終了時にsampのデストラクタが実行される
// さらにオブジェクトを返すので一時オブジェクトが作成される
samp input()
{
    char s[80];
    samp str;

    cout << "文字列の入力: ";
    cin >> s;

    str.set(s);
    return str;
}

int main()
{
    samp ob;

    // ここでエラーが出る。
    // input内でsampが廃棄されるため、デストラクタが呼び出される
    ob = input();
    ob.show();

    return 0;
}





