//
// Created by stefanofa on 05/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CASELLAPESCA_H
#define GAMEOFTHEMADGOOSE_CASELLAPESCA_H


#include "Casella.h"

class CasellaPesca: public Casella {
public:
    CasellaPesca(Casella* Destra = NULL, Casella* Sinistra = NULL);

    bool applicaEffetto(Giocatore* player) override;
    void stampaMsg() override;

    virtual ~CasellaPesca();
};


#endif //GAMEOFTHEMADGOOSE_CASELLAPESCA_H
