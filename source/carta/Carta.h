//
// Created by stefanofa on 05/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CARTA_H
#define GAMEOFTHEMADGOOSE_CARTA_H

#include <iostream>
#include <cstdlib>
#include "../giocatore/Giocatore.h"
#include "../elements.h"

#define coeff_punti 10

using namespace std;

class Carta {

public :

    Carta();

    void addPoints (Giocatore* player , int value = 10);
    void addPointsToPlayer (Giocatore* player);

    virtual void applicaEffetto (Giocatore* player);

    virtual ~Carta();

};



#endif //GAMEOFTHEMADGOOSE_CARTA_H
