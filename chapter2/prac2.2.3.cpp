#include <iostream>
using namespace std;

class box
{
    double width, height, depth, volume;
public:
    box(double w, double h, double d);
    void vol();
};

box::box(double w, double h, double d)
{
    width = w;
    height = h;
    depth = d;
    volume = w * h * d;
}

void box::vol()
{
    cout << "体積は" << volume << "です\n";
}

int main()
{
    box ob1(1.2, 2.3, 3.4), ob2(12345.6789, 12345.6789, 12345.6789), ob3(1.0, 0.9, 0.8);

    ob1.vol();
    ob2.vol();
    ob3.vol();

    return 0;
}

