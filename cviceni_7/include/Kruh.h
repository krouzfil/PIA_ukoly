
#ifndef KRUH_H
#define KRUH_H
#include <iostream>
#include "Tvar.h"

class Kruh : public Tvar
{
    public:
        Kruh(double r_in, double x_in, double y_in);

        void vypisInfo();
        //virtual double obsah() const;
        double obvod() const;
        virtual bool leziUvnitr(double xp, double yp) const;

        virtual double x_min() const { return x - r; };
        virtual double x_max() const { return x + r; };
        virtual double y_min() const { return y - r; };
        virtual double y_max() const { return y + r; };
    private:
        double r, x, y;
};

#endif // KRUH_H
