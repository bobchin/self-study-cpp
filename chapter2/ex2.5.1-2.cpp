#include <iostream>
#include <cstring>
using namespace std;

// 2.5.1をクラスで記述した

class cl_type
{
    double balance;
    char name[40];
public:
    cl_type(double b, const char *n);
    void show();
};

cl_type::cl_type(double b, const char *n) 
{
    balance = b;
    strcpy(name, n);
}

void cl_type::show()
{
    cout << "名前：" << name << "： $" << balance;
    if (balance < 0.0) {
        cout << "***";
    }
    cout << "\n";
}

int main() {
    cl_type acc1(100.12, "Johnson");
    cl_type acc2(-12.34, "Hendricks");

    acc1.show();
    acc2.show();

    return 0;
}
