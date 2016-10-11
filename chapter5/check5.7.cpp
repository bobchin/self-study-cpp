#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *str, int count = 0)
{
    char tmp;
    int i, j;

    if (!count) count = strlen(str) - 1;

    for (i = 0, j = count; i < j; i++, j--) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;        
    }
}

int main()
{
    char s1[] = "This is a test.";
    char s2[] = "I like C++.";

    reverse(s1);
    reverse(s2, 7);

    cout << s1 << "\n";
    cout << s2 << "\n";

    return 0;
}