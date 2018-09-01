//
// Created by stefanofa on 24/08/18.
//

#ifndef GAMEOFTHEMADGOOSE_CASELLA_H
#define GAMEOFTHEMADGOOSE_CASELLA_H

#include <iostream>
using namespace std;

#include "../elements.h"
//#include "../giocatore/Giocatore.h"

class Giocatore;

class Casella {

protected:
    Casella* Destra;
    Casella* Sinistra;

public:

    Casella(Casella* Destra = NULL, Casella* Sinistra = NULL);

    void setDestra (Casella *Destra);
    void setSinistra (Casella *Sinistra);

    Casella* getDestra();
    Casella* getSinistra();

    virtual void applicaEffetto(Giocatore* player);
    virtual void stampaMsg();

    virtual ~Casella();
};


#endif //GAMEOFTHEMADGOOSE_CASELLA_H
