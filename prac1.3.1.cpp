#include <iostream>
using namespace std;

int main()
{
    double time, jikyu;
    cout << "従業員の労働時間を入力してください:";
    cin >> time;

    cout << "従業員の時給を入力してください:";
    cin >> jikyu;

    cout << "合計賃金は" << time * jikyu << "です。";

    return 0;
}


