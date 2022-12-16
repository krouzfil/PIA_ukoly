#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Clovek.h"

void clovek(std::vector <Clovek>& m){
    bool check = true;
    int i=0;
    do{
        m.push_back(Clovek());
        check=m[i].next();
        i++;
    } while (check==true);
}

void sorting(std::vector <Clovek>& m){
    std::sort(m.begin(),m.end(),[](const Clovek& p1, const Clovek& p2) {
        return p1.surname < p2.surname;
    });
}

void save(std::vector <Clovek>& m){
    std::ofstream zapis("data.txt");
    for(int i = 0; i<m.size();i++){
        zapis << m[i].name << " "<< m[i].surname << ", "<< m[i].height << " cm, " << m[i].weight << "  kg, " << m[i].age << " let, " << m[i].edu << " vzdelani\n";
    }
}

int main(){

    std::vector <Clovek> seznam;

    clovek(seznam);
    sorting(seznam);
    save(seznam);


    return 0;
}
