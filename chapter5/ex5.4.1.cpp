#include <iostream>
using namespace std;

float f(float i)
{
    return i / 2.0;
}

double f(double i)
{
    return i / 3.0;
}

int main()
{
    float x = 10.09;
    double y = 10.09;
    cout << f(x);   // あいまいではないf(float)を使う
    cout << f(y);   // あいまいではないf(double)を使う
    cout << f(10);  // あいまい。10をdoubleとfloatどちらにも変換可能

    return 0;
}