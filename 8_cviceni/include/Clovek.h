#ifndef CLOVEK_H
#define CLOVEK_H
#include <iostream>
#include <vector>


class Clovek
{
    public:
        Clovek();

        virtual ~Clovek();
        std::string name, surname, edu;
        int age;
        float height, weight;
        bool next();
        bool n;


    protected:


    private:
        std::string input;
        std::string jmeno(), prijmeni(), vzdelani();
        float input1;
        float input2;
        int input3;
        bool check;
        int vek();
        float vyska(), hmotnost();
};

#endif // CLOVEK_H
