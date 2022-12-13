#include <iostream>
#include <vector> //knihovna pro praci s vektory
#include <fstream> //knihovna pro nacitani ze souboru
#include <string>

int main() {

    //int pole[10] = {1,2,3,4,5,11,12,14,16,24};

    //pole[0] = 5; //prepsani ve vektoru na 0. pozici na 5


    //std::cout << pole[9] << "\n"; //zobrazeni 9. slozky vektoru
    //
    //for (int i=0; i<10; ++i) {      //vypsani vsech slozek vektoru
    //    std::cout << pole[i] << "\n";
    //}
    //
    //int * ukazatel;
    //ukazatel = pole;
    //
    //for (int i=0; i<10; ++i) {      //zobrazeni adresy/pozice vektoru
    //    std::cout << *(ukazatel+1) << "\n";
    //    }

    std::ifstream soubor("data.txt");

    std::vector<int> muj_vektor(10000);
    //muj_vektor = {1,2,3,4,5,11,12,14,16,24};
    //muj_vektor.push_back(50);

    int dolni_mez = 641;
    int horni_mez = 6162;
    int pocet = 0;
    int suma = 0;

    int cislo = 0;
    for (int i=0; i<muj_vektor.size(); ++i) {
        soubor >> cislo;
        muj_vektor[i] = cislo;

        if (muj_vektor.at(i) > dolni_mez && muj_vektor.at(i) < horni_mez){
            pocet = ++pocet; // ++ = +1
            suma = suma + muj_vektor.at(i);
        }

        else {
            pocet = pocet;
            suma = suma;
        }
    }

    int prumer = suma/pocet;

    std::cout << "Pocet cisel vetsich nez " << horni_mez << " a mensich nez " << dolni_mez << " ve vektoru je " << pocet <<"\n";
    std::cout << "Aritmeticky prumer cisel je " << prumer << "\n";

    return 0;
}
