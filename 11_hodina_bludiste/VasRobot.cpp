#include "VasRobot.h"

bool VasRobot::start(Bludiste & map) {

    // Tady muzete doplnit kod pro inicializaci robota

    return true;
}

bool VasRobot::start(BludisteOdkryte & map) {

    // Tady muzete doplnit kod pro inicializaci robota pri prochazeni znameho bludiste

    return true;
}

bool VasRobot::stop() {

    // Tady muzete doplnit kod pro zastaveni robota

   return true;
}
/*bool zmenaSmeru(Bludiste & map) {
    if(!map.nahoru()){
            return false;
            }
    else if(!map.dolu()){
            return true;
            }
    }*/
void VasRobot::krok(Bludiste & map) {
    // Tato metoda se bude opakovat, dokud robot nedosahne cile nebo maximalniho poctu kroku

    /*if(zmenaSmeru(Bludiste & map) = true){
        map.nahoru();
    }
    else if(zmenaSmeru(Bludiste & map) = false){
        map.dolu();
    }
    if(!map.nahoru()){
        map.vpravo();
    }
    else if(!map.dolu()){
        map.vpravo();
    }*/
    map.nahoru();
    map.nahoru();
    if(map.nahoru()==false) {
            map.vpravo();

        do  {
            map.dolu();
    }   while(map.dolu()==true);
            map.vpravo();
    }
}

    /*while(!map.nahoru()){
        map.nahoru();
        }
    if(!map.nahoru()){map.vpravo();}
    while(!map.dolu()){
        map.dolu();
        }
    if(!map.dolu()){map.vpravo();}

*/

void VasRobot::krok(BludisteOdkryte & map) {

    // Tato metoda se bude opakovat, dokud robot nedosahne cile nebo maximalniho poctu kroku
    // Verze pro odkryte bludiste

}

std::string VasRobot::jmeno() {

    // Tato metoda by mela vratit jmeno robota
    return "Zidan";
}
