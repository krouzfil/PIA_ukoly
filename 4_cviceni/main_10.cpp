#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream soubor("data.txt");
    vector<int> muj_vektor(10000);
    bool sorted = false;
    int docas = 0;
    int cislo = 0;

    //int myarray[10] = {12,4,3,1,15,45,33,21,10,2};

    //cout << "\nInput list is \n";
    //for(int i = 0; i < 10; i++)
    //{
    //    cout << myarray[i] << "\t";
    //}

//nahravani ze souboru//
    for(int i = 0; i < muj_vektor.size(); ++i)
    {
        soubor >> cislo;
        muj_vektor[i] = cislo;
    }
//sorting//
    for(int k = 0; k < muj_vektor.size(); k++)
    {
        int temp = muj_vektor[k];
        int j = k - 1;
        while(j >= 0 && temp <= muj_vektor[j])
        {
            muj_vektor[j+1] = muj_vektor[j];
            j = j-1;
        }
        muj_vektor[j+1] = temp;
    }
    ofstream vystupni_soubor("sorted.txt");
        for(int i=0; i<muj_vektor.size(); ++i)
        {
            vystupni_soubor << muj_vektor.at(i) << "\n";
        }
        return 0;
}
