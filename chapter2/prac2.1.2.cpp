#include <iostream>
#include <ctime>
using namespace std;

class stopwatch
{
    double begin, end;
public:
    stopwatch();
    ~stopwatch();
    void start();
    void stop();
    void show();
};

stopwatch::stopwatch()
{
    begin = end = 0.0;
}

stopwatch::~stopwatch()
{
    cout << "Stopwatchオブジェクトは破壊された";
}

void stopwatch::start()
{
    begin = (double)clock() / CLOCKS_PER_SEC;
}

void stopwatch::stop()
{
    end = (double)clock() / CLOCKS_PER_SEC;
}

void stopwatch::show()
{
    cout << "経過時間:" << end - begin << "\n";
}

int main() {
    stopwatch watch;
    long i;

    watch.start();
    for (i = 0; i < 100000000; i++) ;
    watch.stop();

    watch.show();

    return 0;
}





