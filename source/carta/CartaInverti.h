//
// Created by stefanofa on 05/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CARTAINVERTI_H
#define GAMEOFTHEMADGOOSE_CARTAINVERTI_H


#include "Carta.h"



class CartaInverti: public Carta {
public:
    CartaInverti();

    void applicaEffetto(Giocatore* player) override;

    virtual ~CartaInverti();
};


#endif //GAMEOFTHEMADGOOSE_CARTAINVERTI_H
