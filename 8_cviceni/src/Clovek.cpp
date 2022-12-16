#include "Clovek.h"
#include <iostream>

Clovek::Clovek()
{
    name=jmeno();
    surname=prijmeni();
    height=vyska();
    weight=hmotnost();
    age=vek();
    edu=vzdelani();

}


std::string Clovek::jmeno(){
        std::cout << "Zadejte sve jmeno: ";
        std::cin >> input;
        return input;
}

std::string Clovek::prijmeni(){
    std::cout << "Zadejte sve prijmeni: ";
    std::cin >> input;
    return input;
}

float Clovek::vyska(){
    check = true;
    do{
        std::cout<<"Zadejte svou vysku [cm]: ";
        std::cin >> input1;
        if (100 < input1 && input1 < 230){
            check = false;
            return input1;
        }
        else{
            std::cout << "Zadali jste nespravne hodnoty!\n ";
        }
    } while (check == true);
}

float Clovek::hmotnost(){
        std::cout<<"Zadejte svou hmotnost [kg]: ";
        std::cin >> input2;
        return input2;
        }

int Clovek::vek(){
    check = true;
    do{
        std::cout<<"Zadejte svuj vek: ";
        std::cin >> input3;
        if (5 < input3 && input3 < 100){
            check = false;
            return input3;
        }
        else{
            std::cout << "Zadali jste nespravne hodnoty!\n ";
        }
    } while (check == true);
}

bool Clovek::next(){
    std::string pokracovat{};
    std::cout << "Pokud chcete pridat osobu, zadejte `Ano`, pokud ne, zadejte `ne`.";
    std::cin >> pokracovat;
    if (pokracovat =="Ano" || pokracovat == "ano"){
        return true;
    }
    else{
        return false;
    }
}

std::string Clovek::vzdelani(){

    int skola;
    bool check=true;

    do{
        std::cout << "Zadejte sve nejvyssi dosazene vzdelani: 1-Zakladni 2-Stredni 3-Vysokoskolske \n";
        std::cin >> skola;
        if (skola == 1) {

            check = false;
            return "zakladni";

        }
        else if (skola == 2) {

            check = false;
            return "stredoskolske";
        }
        else if (skola == 3){

            check = false;
            return "vysokoskolske";
        }
        else{
            std::cout << "Zadali jste nespravne hodnoty!\n ";
            check = true;
        }
    }while (check == true);
}

Clovek::~Clovek()
{
    //dtor
}
