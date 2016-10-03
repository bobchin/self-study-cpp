#include <iostream>
using namespace std;

#define SIZE 10

class stack
{
    char stck[SIZE];
    int tos;
public:
    stack();
    void push(char ch);
    char pop();
};

stack::stack()
{
    cout << "スタックを生成する\n";
    tos = 0;
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

void showstack(stack o)
{
    char c;
    while(c = o.pop()) {
        cout << c << "\n";
    }
    cout << "\n";
}

int main() {
    stack s1;
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');

    showstack(s1);

    for (i = 0; i < 3; i++) {
        cout << "s1をポップする:" << s1.pop() << "\n";
    }

    return 0;
}




