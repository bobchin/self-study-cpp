#include <iostream>
#include <cstring>
using namespace std;

class tel
{
    char name[40];
    char number[14];
public:
    void set_namenumber(const char *n, const char *num)
    {
        strcpy(name, n);
        strcpy(number, num);
    }
    void show()
    {
        cout << name << ": " << number;
        cout << "\n";
    }
};

int main()
{
    tel *t;
    t = new tel;
    if (!t) {
        cout << "メモリ割り当てエラー\n";
        return 1;
    }

    t->set_namenumber("bobchin" , "011-123-4567");
    t->show();

    delete t;

    return 0;
}