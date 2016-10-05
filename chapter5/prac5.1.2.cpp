#include <iostream>
#include <ctime>
using namespace std;

class stopwatch
{
    double begin, end;
public:
    stopwatch();
    stopwatch(clock_t t);
    ~stopwatch();
    void start();
    void stop();
    void show();
};

stopwatch::stopwatch()
{
    begin = end = 0.0;
}

stopwatch::stopwatch(clock_t t)
{
    begin = (double)t / CLOCKS_PER_SEC;
    end = 0.0;
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

    stopwatch watch2(clock());
    for (i = 0; i < 100000000; i++) ;
    watch2.stop();
    watch2.show();

    return 0;
}





