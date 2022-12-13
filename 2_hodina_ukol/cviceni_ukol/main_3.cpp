#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

int main()
{
    std::cout << "Zadejte krestni jmeno: ";
    std::string krestni_jmeno;
    std::cin >> krestni_jmeno;

    std::cout << "Zadejte prijmeni: ";
    std::string prijmeni;
    std::cin >> prijmeni;

    std::cout << "Zadejte sve maximalni dosazene vzdelani:\n""(Pro ZS->1; SS->2; VS->3)\n";
    enum vzdelani {ZS,SS,VS};
    int i;
    std::cin >> i;
    vzdelani skola = vzdelani(i);
    std::cout << "Vase vzdelani je " << skola << "\n";

    float vyska;
    std::cout << "Zadejte svoji vysku: \n";
    std::cin >> vyska;

    float hmotnost;
    std::cout << "Zadejte svoji hmotnost: \n";
    std::cin >> hmotnost;

    float vek;
    std::cout << "Zadejte svuj vek: \n";
    std::cin >> vek;

    std::cout << "Vase krestni jmeno je " << krestni_jmeno << "\n";
    std::cout << "Vase prijmeni je " << prijmeni << "\n";
    if (i==1){
        std::cout << "Vase vzdelani je ZS \n";
        }
    else if (i==2){
        std::cout << "Vase vzdelani je SS \n";
        }
    else if (i==3){
        std::cout << "Vase vzdelani je VS \n";
        }
    else {
        std::cout << "Zadali jste cislo, ktere neni v intervalu \n";
        }
    std::cout << "Vase vyska je " << vyska << "\n";
    std::cout << "Vase hmotnost je " << hmotnost << "\n";
    std::cout << "Vas vek je " << vek << "\n";

    std::ofstream vystupni_soubor("vystup.txt");
    vystupni_soubor << "Vase krestni jmeno je " << krestni_jmeno << "\n";
    vystupni_soubor << "Vase prijmeni je " << prijmeni << "\n";
    if (i==1){
        vystupni_soubor << "Vase vzdelani je ZS \n";
        }
    else if (i==2){
        vystupni_soubor << "Vase vzdelani je SS \n";
        }
    else if (i==3){
        vystupni_soubor << "Vase vzdelani je VS \n";
        }
    else {
        vystupni_soubor << "Zadali jste cislo, ktere neni v intervalu \n";
        }
    vystupni_soubor << "Vase vyska je " << vyska << "\n";
    vystupni_soubor << "Vase hmotnost je " << hmotnost << "\n";
    vystupni_soubor << "Vas vek je " << vek << "\n";

    return 0;






}
