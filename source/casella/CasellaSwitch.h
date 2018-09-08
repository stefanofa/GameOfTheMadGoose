//
// Created by stefanofa on 08/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CASELLASWITCH_H
#define GAMEOFTHEMADGOOSE_CASELLASWITCH_H


#include "Casella.h"

class CasellaSwitch: public Casella {

public:


    CasellaSwitch(Casella* Destra = NULL, Casella* Sinistra = NULL);

    bool applicaEffetto(Giocatore* player) override;
    void stampaMsg() override;
    char* getMessage() override;


    int tipocasella() override;

    virtual ~CasellaSwitch();
};

#endif //GAMEOFTHEMADGOOSE_CASELLASWITCH_H
