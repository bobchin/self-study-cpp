#include <iostream>
#include <cstring>
using namespace std;

class Man {
    char name[80];
    char address[80];
public:
    void store(char *n, char *a);
    void display();
};

void Man::store(char *n, char *a) {
    strcpy(name, n);
    strcpy(address, a);
}

void Man::display() {
    cout << "名前　　は" << name << "です\n";
    cout << "アドレスは" << address << "です\n";
}

int main() {
    char n[80], a[80];
    Man data;

    cout << "名前を入力してください:";
    cin >> n; 
    cout << "アドレスを入力してください:";
    cin >> a; 

    data.store(n, a);
    data.display();

    return 0;
}