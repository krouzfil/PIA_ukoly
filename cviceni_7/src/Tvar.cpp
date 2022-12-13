#include "Tvar.h"
#include <fstream>

double Tvar::obsah() const
{
    std::ofstream kontrolni_soubor("body.txt");
    const int N = 100;
    const double xl = x_min();
    const double xr = x_max();
    const double yl = y_min();
    const double yr = y_max();

    const double dx = ((xr - xl)/double(N));
    const double dy = ((yr - yl)/double(N));

    double obsah_num = 0;

    for (int i = 0; i < N; ++i)
    {
        kontrolni_soubor << xl + i*dx << " " << yl + i*dy << "\n";
    }

    for (int i=0; i<N; ++i)
    {
        for (int j=0; j<N; ++j)
            if(leziUvnitr(xl + i*dx + dx/2, yl + j*dy + dy/2) == true)
            {
                obsah_num += (dx*dy);
            }
    }
    kontrolni_soubor << obsah_num << "\n";
    return obsah_num;
}
