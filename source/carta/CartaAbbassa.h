//
// Created by stefanofa on 05/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CARTAABBASSA_H
#define GAMEOFTHEMADGOOSE_CARTAABBASSA_H


#include "Carta.h"

#define coeffabbassa -30

class CartaAbbassa: public Carta {
public:
    CartaAbbassa();

    void applicaEffetto(Giocatore* player) override;

    virtual ~CartaAbbassa();
};

#endif //GAMEOFTHEMADGOOSE_CARTAABBASSA_H
