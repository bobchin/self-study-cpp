#include <iostream>
using namespace std;

class truck;

class car
{
    int passengers;
    int speed;
public:
    car(int p, int s) { passengers = p; speed = s; }
    int sp_greater(truck t);
};

class truck
{
    int weight;
    int speed;
public:
    truck(int w, int s) { weight = w; speed = s; };
    // スコープ解決演算子を使用する
    friend int car::sp_greater(truck t);
};

int car::sp_greater(truck t)
{
    return speed - t.speed;
}

int main()
{
    int t;
    car c1(6, 55), c2(2, 120);
    truck t1(10000, 55), t2(20000, 72);

    cout << "c1とt1を比較\n";
    t = c1.sp_greater(t1);
    if (t < 0)
    {
        cout << "トラックが速い\n";
    } else if (t == 0) {
        cout << "乗用車とトラックの速度は同じ\n";
    } else {
        cout << "乗用車が速い\n";
    }

    cout << "c2とt2を比較\n";
    t = c2.sp_greater(t2);
    if (t < 0)
    {
        cout << "トラックが速い\n";
    } else if (t == 0) {
        cout << "乗用車とトラックの速度は同じ\n";
    } else {
        cout << "乗用車が速い\n";
    }
    
    return 0;
}