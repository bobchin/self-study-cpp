#include <iostream>
#include <cstring>
using namespace std;

class card {
    char title[80];
    char author[40];
    int count;
public:
    void store(const char *title, const char *author, int count);
    void show();
};

void card::store(const char* t, const char* a, int c) {
    strcpy(title, t);
    strcpy(author, a);
    count = c;
}

void card::show() {
    cout << "本のタイトル：" << title << "\n";
    cout << "本の著者　　：" << author << "\n";
    cout << "本の数　　　：" << count << "\n";
}

int main() {
    card book1, book2, book3;

    book1.store("本１", "いちはし", 4);
    book2.store("本２", "にはし", 10);
    book3.store("本３", "さんはし", 500);

    book1.show();
    book2.show();
    book3.show();

    return 0;
}