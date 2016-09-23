#include <iostream>
using namespace std;

class area_cl {
public:
    double height;
    double width;
};

class rectangle : public area_cl {
public:
    rectangle(double w, double h);
    double area();
};

class isosceles : public area_cl {
public:
    isosceles(double w, double h);
    double area();
};

rectangle::rectangle(double w, double h)
{
    width = w;
    height = h;
}

double rectangle::area()
{
    return width * height;
}

isosceles::isosceles(double w, double h)
{
    width = w;
    height = h;
}

double isosceles::area()
{
    return width * height / 2;
}

int main()
{
    rectangle r(10.0, 5.0);
    isosceles i(4.0, 6.0);

    cout << "長方形の面積: " << r.area() << "です。\n";
    cout << "二等辺三角形の面積: " << i.area() << "です。\n";

    return 0;
}


