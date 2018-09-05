//
// Created by stefanofa on 05/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CARTAINDOVINA_H
#define GAMEOFTHEMADGOOSE_CARTAINDOVINA_H


#include "Carta.h"

const int coeffIndovina = 3;

class CartaIndovina: public Carta {
public:
    CartaIndovina();

    void applicaEffetto(Giocatore* player) override;

    virtual ~CartaIndovina();
};


#endif //GAMEOFTHEMADGOOSE_CARTAINDOVINA_H
