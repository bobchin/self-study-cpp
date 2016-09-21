#include <iostream>
using namespace std;

#define SIZE 101

class q_type {
    int queue[SIZE];
    int head, tail;
public:
    void init();
    void q(int num);
    int deq();
};

void q_type::init() {
    head = tail = 0;
}

void q_type::q(int num) {
    if (tail + 1 == head || (tail + 1) == SIZE && !head) {
        cout << "キューは一杯です\n";
        return;
    }
    tail++;
    if (tail == SIZE) {
        tail = 0;
    }
    queue[tail] = num;
}

int q_type::deq() {
    if (head == tail) {
        cout << "キューは空です\n";
        return 0;
    }
    head++;
    if (head == SIZE) {
        head = 0;
    }
    return queue[head];
}

int main() {
    q_type q1, q2;
    int i;

    q1.init();
    q2.init();

    for (i = 1; i <= 10; i++) {
        q1.q(i);
        q2.q(i * i);
    }
    
    for (i = 1; i <= 10; i++) {
        cout << "キューから値を削除する(q1):" << q1.deq() << "\n";
        cout << "キューから値を削除する(q2):" << q2.deq() << "\n";
    }

    return 0;
}


