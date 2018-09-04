//
// Created by stefanofa on 01/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CASELLAFERMO_H
#define GAMEOFTHEMADGOOSE_CASELLAFERMO_H


#include "Casella.h"

class CasellaFermo: public Casella {
public:
    CasellaFermo(Casella* Destra = NULL, Casella* Sinistra = NULL);

    void applicaEffetto(Giocatore* player) override;
   // void stampaMsg() override;
    char* getMessage() override;

    int tipocasella() override;

    virtual ~CasellaFermo();
};


#endif //GAMEOFTHEMADGOOSE_CASELLAFERMO_H
