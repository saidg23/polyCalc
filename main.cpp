#include <iostream>
#include <cmath>
#include "constants.h"

using namespace std;
using  namespace cons;

float getIn()
{
    int in;
    cin >> in;
    return in;
}

int main()
{
    float nSides;
    int x(1);
    while(x == 1)
    {
        cout << "enter the number of sides: ";

        nSides = getIn();
        if (nSides >= 3)
            x += 1;
        else
            cout << "INVALID ENTRY" << '\n';
    }

    cout << "enter the length of the sides: ";

    float sLength(getIn());
    double halfLength(sLength/2);

    float angleA(360 / nSides);
    float angleB((180 - angleA)/2);

    double apothem(halfLength * tan(angleB * pi / 180));

    double triArea((sLength * apothem) / 2);
    double polyArea(triArea * nSides);

    cout << "Area = " << polyArea << " units squared" << '\n';

    return 0;
}
