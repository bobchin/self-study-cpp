#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

class date {
    int day, month, year;
public:
    date(time_t t);
    date(const char *str);
    date(int m, int d, int y) {
        day = d;
        month = m;
        year = y;
    }
    void show() {
        cout << month << '/' << day << '/' << year << "\n";
    }
};

date::date(time_t t)
{
    struct tm *p;
    p = localtime(&t);

    day = p->tm_mday;
    month = p->tm_mon + 1;
    year = p->tm_year + 1900;
}

date::date(const char *str)
{
    sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

int main()
{
    time_t t = time(NULL);
    date tdate(t);
    date sdate("12/31/99");
    date idate(12, 31, 99);

    tdate.show();
    sdate.show();
    idate.show();

    return 0;
}