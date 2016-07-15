#include <iostream>
#include <cstring>
using namespace std;

void rev_str(char*);
void rev_str(char*, char*);

int main() {
    char s1[80], s2[80];
    strcpy(s1, "This is a test");

    rev_str(s1, s2);
    cout << s2 << "\n";

    rev_str(s1);
    cout << s1 << "\n";

    return 0;
}

void rev_str(char *s) {
    char temp[80];
    int i, j;

    for (j = strlen(s) - 1, i = 0; j >= 0; j--, i++) {
        temp[i] = s[j];
    }
    temp[i] = '\0';

    strcpy(s, temp);
}

void rev_str(char *in, char *out) {
    int i, j;

    for (j = strlen(in) - 1, i = 0; j >= 0; j--, i++) {
        out[i] = in[j];
    }
    out[i] = '\0';
}