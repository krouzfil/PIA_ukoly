#ifndef KRUH_H
#define KRUH_H


class Kruh
{
    public:
        Kruh(double r_in, double x_in, double y_in);
        void vypisInfo();
        double obsah();
        double obvod();
        bool leziUvnitr(double xp, double yp);

    protected:

    private:
    double r, x, y;

};

#endif // KRUH_H
