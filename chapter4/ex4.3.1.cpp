#include <iostream>
#include <cstring>
using namespace std;

class inventory
{
    char item[20];
    double cost;
    int on_hand;
public:
    inventory(const char *i, double c, int o)
    {
        strcpy(this->item, i);  // itemでもいい
        this->cost = c;         // costでもいい
        this->on_hand = o;      // on_handでもいい
    }
    void show();
};

void inventory::show()
{
    cout << this->item << ": $" << this->cost;
    cout << "  ";
    cout << "在庫： " << this->on_hand << "\n";
}

int main()
{
    inventory ob("レンチ", 4.95, 4);
    ob.show();
    return 0;
}