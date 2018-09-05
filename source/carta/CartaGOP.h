//
// Created by stefanofa on 05/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CARTAGOP_H
#define GAMEOFTHEMADGOOSE_CARTAGOP_H


#include "Carta.h"

class CartaGOP: public Carta {
public:
    CartaGOP();

    void applicaEffetto(Giocatore* player) override;

    virtual ~CartaGOP();
};


#endif //GAMEOFTHEMADGOOSE_CARTAGOP_H
