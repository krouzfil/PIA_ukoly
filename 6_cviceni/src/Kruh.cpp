#include "Kruh.h"
#include <cmath>
#include <iostream>

using namespace std;

Kruh::Kruh(double r_in, double x_in, double y_in)
{
    r = r_in;
    x = x_in;
    y = y_in;
}

void Kruh::vypisInfo()
{
    cout << "Polomer kruhu =" << r << "souradnice stredu kruhu x a y = (" << x << "," << y << ")";
}

double Kruh::obsah()
{
    return 3.14*r*r;
}

double Kruh::obvod()
{
    return 3.14*r*2;
}

bool Kruh::leziUvnitr(double xp, double yp)
{
    double vzdalenost = sqrt((xp-x)*(xp-x)+(yp-y)*(yp-y));
    if(vzdalenost > r)
    {
        return false;
    }

    else
    {
        return true;
    }
}
