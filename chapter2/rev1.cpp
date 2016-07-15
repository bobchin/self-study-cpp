#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[80];

    cout << "文字列を入力してください";
    cin >> s;

    cout << s << "は" << strlen(s) << "文字です\n";

    return 0;
}