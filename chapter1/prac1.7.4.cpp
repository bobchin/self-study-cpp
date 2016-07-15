#include <iostream>
#include <cstdlib>
using namespace std;

#define DELAY 100000000

void sleep(int);
void sleep(const char*);

int main() {
    cout << '.';
    sleep(3);
    cout << '.';
    sleep("2");
    cout << ".\n";
    return 0;
}

void sleep(int n) {
    long i;
    for (; n; n--) {
        for (i = 0; i < DELAY; i++) ;
    }
}

void sleep(const char *n) {
    long i;
    int j;

    j = atoi(n); 
    for (; j; j--) {
        for (i = 0; i < DELAY; i++) ;
    }
}
