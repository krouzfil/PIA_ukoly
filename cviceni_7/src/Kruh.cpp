#include <iostream>
#include <cmath>
#include "Kruh.h"


Kruh::Kruh(double r_in, double x_in, double y_in)
{
   r = r_in;
   x = x_in;
   y = y_in;
}

void Kruh::vypisInfo()
{
    std::cout << "Polomer kruhu =" << r << "souradnice stredu kruhu x a y = (" << x << "," << y << ")";
}

//double Kruh::obsah() const
//{
//    return 3.14*r*r;
//}

double Kruh::obvod() const
{
    return 3.14*r*2;
}

bool Kruh::leziUvnitr(double xp, double yp) const
{
    double vzdalenost = sqrt((xp-x)*(xp-x)+(yp-y)*(yp-y));
  if (vzdalenost > r)
  {
    return false;
  }

  else {
    return true;
  }
}
