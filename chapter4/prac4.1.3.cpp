#include <iostream>
using namespace std;

class letters
{
    char ch;
public:
    letters(char c) { ch = c; }
    char get_ch() { return ch; }
};

int main()
{
    letters let[10] = {
        letters('A'), letters('B'), letters('C'), letters('D'), letters('E'),
        letters('F'), letters('G'), letters('H'), letters('I'), letters('J')
    };

    int i;
    for (i = 0; i < 10; i++)
    {
        cout << let[i].get_ch() << "\n";
    }

    return 0;
}