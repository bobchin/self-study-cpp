#include <iostream>
using namespace std;

class area_cl {
public:
    double height;
    double width;
};

class rectangle : public area_cl {
public:
    rectangle(double h, double w) {
        height = h; width = w;
    }
    double area() { return width * height; }
};

class isosceles : public area_cl {
public:
    isosceles(double h, double w) {
        height = h; width = w;
    }
    double area() { return width * height / 2; }
};

class cylinder : public area_cl {
public:
    cylinder(double h, double w) {
        height = h; width = w;
    }
    double area() {
        double pi = 3.1416;
        return (2 * pi * (width / 2) * (width / 2)) +
            (pi * width * height);
    }
};

int main()
{
    rectangle r(10.0, 5.0);
    isosceles i(4.0, 6.0);
    cylinder c(3.0, 4.0);

    cout << "長方形の面積: " << r.area() << "です。\n";
    cout << "二等辺三角形の面積: " << i.area() << "です。\n";
    cout << "シリンダの面積: " << c.area() << "です。\n";

    return 0;
}
