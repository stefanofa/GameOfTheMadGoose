//
// Created by stefanofa on 15/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CASELLAALLORNOTHING_H
#define GAMEOFTHEMADGOOSE_CASELLAALLORNOTHING_H


#include "Casella.h"

class CasellaAllOrNothing: public Casella {
public:
    CasellaAllOrNothing(Casella* Destra = NULL, Casella* Sinistra = NULL);

    bool applicaEffetto(Giocatore* player) override;
    void stampaMsg() override;
    char* getMessage() override;

    int tipocasella() override;

    virtual ~CasellaAllOrNothing();
};


#endif //GAMEOFTHEMADGOOSE_CASELLAALLORNOTHING_H
