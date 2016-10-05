#include <iostream>
#include <cstdlib>
using namespace std;

class array {
    int isize, jsize;
    int *p;
public:
    array(int i, int j);
    int &put(int i, int j);
    int get(int i, int j);
};

array::array(int i, int j) {
    p = new int[i * j];
    if (!p) {
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    isize = i;
    jsize = j;
}

int &array::put(int i, int j) {
    if (i < 0 || i >= isize || j < 0 || j >= jsize) {
        cout << "境界エラー!!!\n";       
    }
    return p[i * jsize + j];
}

int array::get(int i, int j) {
    if (i < 0 || i >= isize || j < 0 || j >= jsize) {
        cout << "境界エラー!!!\n";       
    }
    return p[i * jsize + j];
}

int main()
{
    array a(2, 3);
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            a.put(i, j) = i + j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            cout << a.get(i, j) << ' ';

    a.put(10, 10);

    return 0;
}
