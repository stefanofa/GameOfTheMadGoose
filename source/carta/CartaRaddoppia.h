//
// Created by stefanofa on 05/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CARTARADDOPPIA_H
#define GAMEOFTHEMADGOOSE_CARTARADDOPPIA_H


#include "Carta.h"

class CartaRaddoppia: public Carta {
public:
    CartaRaddoppia();

    void applicaEffetto(Giocatore* player) override;

    virtual ~CartaRaddoppia();
};

#endif //GAMEOFTHEMADGOOSE_CARTARADDOPPIA_H
