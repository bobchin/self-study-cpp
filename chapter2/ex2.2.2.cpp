#include <iostream>
using namespace std;

#define SIZE 10

class stack
{
    char stck[SIZE];
    int tos;
    char who;
public:
    stack(char c);
    void push(char ch);
    char pop();
};

stack::stack(char c)
{
    tos = 0;
    who = c;
    cout << "生成 スタック" << who << "\n";
}

void stack::push(char ch)
{
    if (tos == SIZE) {
        cout << "スタック" << who << "は一杯です\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop()
{
    if (tos == 0) {
        cout << "スタック" << who << "は空です\n";
        return 0;
    }
    tos--;
    return stck[tos];
}


int main() {
    stack s1('A'), s2('B');
    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i = 0; i < 5; i++) {
        cout << "s1をポップする:" << s1.pop() << "\n";
    }
    for (i = 0; i < 5; i++) {
        cout << "s2をポップする:" << s2.pop() << "\n";
    }

    return 0;
}