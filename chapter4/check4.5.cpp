#include <iostream>
using namespace std;

class summation {
    int num;
    long sum;
public:
    void set_sum(int n);
    void show_sum() {
        cout << num << " 総計は " << sum << "\n";
    }
};

void summation::set_sum(int n) {
    int i;
    num = n;
    sum = 0;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
}

summation make_sum() {
    summation ob;
    int i;

    cout << "整数を入力してください";
    cin >> i;
    ob.set_sum(i);

    return ob;
}

int main()
{
    summation ob;
    
    ob = make_sum();
    ob.show_sum();

    return 0;
}
