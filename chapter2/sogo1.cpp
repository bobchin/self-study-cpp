#include <iostream>
using namespace std;

class prompt {
    int count;
public:
    prompt(const char *str) {
        cout << str;
        cin >> count;
    }
    ~prompt() {
        int i, j;
        for (i = 0; i < count; i++)
        {
            cout << '\a';
            for (j = 0; j < 1000000; j++) ;
        }
    }
};

int main()
{
    prompt prt("整数を入力してください:");

    return 0;
}