#include <iostream>
using namespace std;

#define SIZE 27

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

void showstack(stack o) {
    char c;
    while (c = o.pop()) {
        cout << c;
    }
    cout << "\n";
}

stack loadstack() {
    stack t;
    char c;
    for (c = 'a'; c <= 'z'; c++) {
        t.push(c);
    }
    return t;
}

stack loadstack(int upper) {
    stack t;
    char c;

    if (upper) {
        for (c = 'A'; c <= 'Z'; c++) {
            t.push(c);
        }
    } else {
        t = loadstack();
    }
    return t;
}

int main()
{
    stack s1;

    s1 = loadstack();
    showstack(s1);

    s1 = loadstack(1);
    showstack(s1);

    s1 = loadstack(0);
    showstack(s1);

    return 0;
}