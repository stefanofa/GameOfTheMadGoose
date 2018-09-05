//
// Created by stefanofa on 05/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CARTAIMMUNITA_H
#define GAMEOFTHEMADGOOSE_CARTAIMMUNITA_H


#include "Carta.h"

class CartaImmunita: public Carta {
public:
    CartaImmunita();

    void applicaEffetto(Giocatore* player) override ;

    virtual ~CartaImmunita();
};

#endif //GAMEOFTHEMADGOOSE_CARTAIMMUNITA_H
