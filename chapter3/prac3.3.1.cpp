#include <iostream>
using namespace std;

class who {
    char name;
public:
    who(char c) {
        name = c;
        cout << "(" << name << ")のコンストラクタ\n";
    }
    ~who() {
        cout << "(" << name << ")のデストラクタ\n";
    }
};

who make_who() {
    who temp('B');
    return temp;
}

int main()
{
    who ob('A');

    make_who();

    return 0;
}