#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *p;
    p = new char[100];

    strcpy(p, "This is a test");

    cout << p << "\n";

    delete[] p;

    return 0;
}