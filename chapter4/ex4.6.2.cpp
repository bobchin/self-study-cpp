#include <iostream>
#include <cmath>
using namespace std;

void my_round(double &num);

int main()
{
    double i = 100.4;

    cout << i << " を丸めると ";
    my_round(i);
    cout << i << "\n";

    i = 10.9;
    cout << i << " を丸めると ";
    my_round(i);
    cout << i << "\n";

    return 0;
}

void my_round(double &num)
{
    double frac;
    double val;

    // numを整数部と小数部に分解する
    // frac: 小数部 val: 整数部
    frac = modf(num, &val);

    if (frac < 0.5) {
        num = val;
    } else {
        num = val + 1.0;
    }
}