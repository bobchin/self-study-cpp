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
    cout << "���O�@�@��" << name << "�ł�\n";
    cout << "�A�h���X��" << address << "�ł�\n";
}

int main() {
    char n[80], a[80];
    Man data;

    cout << "���O����͂��Ă�������:";
    cin >> n; 
    cout << "�A�h���X����͂��Ă�������:";
    cin >> a; 

    data.store(n, a);
    data.display();

    return 0;
}