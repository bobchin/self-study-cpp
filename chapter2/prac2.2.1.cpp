#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 10

class stack
{
    char *stck;
    int tos;
    int size;
public:
    stack(int s);
    ~stack();
    void push(char ch);
    char pop();
};

stack::stack(int s)
{
    cout << "スタックを生成する\n";

    tos = 0;
    stck = (char *)malloc(s);
    if (!stck) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    size = s;
}

stack::~stack()
{
    free(stck);
}

void stack::push(char ch)
{
    if (tos == SIZE) {
        cout << "スタックは一杯です\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop()
{
    if (tos == 0) {
        cout << "スタックは空です\n";
        return 0;
    }
    tos--;
    return stck[tos];
}


int main() {
    stack s1(10), s2(20);
    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i = 0; i < 3; i++) {
        cout << "s1をポップする:" << s1.pop() << "\n";
    }
    for (i = 0; i < 3; i++) {
        cout << "s2をポップする:" << s2.pop() << "\n";
    }

    return 0;
}