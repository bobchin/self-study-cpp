#include <iostream>
using namespace std;

class planet {
    int moons;
    double dist_from_sun;
    double diameter;
    double mass;
public:
    planet(double miles) {
        dist_from_sun = miles;
    }
    double get_miles() { return dist_from_sun; }
};

double light(planet p) {
    return p.get_miles() / 186000;
}

int main()
{
    planet p(999);

    cout << light(p) << "\n";

    return 0;
}