//
// Created by stefanofa on 01/09/18.
//

#ifndef GAMEOFTHEMADGOOSE_CASELLAPUNTI_H
#define GAMEOFTHEMADGOOSE_CASELLAPUNTI_H

#include "Casella.h"

class CasellaPunti: public Casella {

private:
    //ogni casella di questo tipo da diritto ad un numero di punti
    //multiplo di 20, fino ad un massimo di 100 punti (20,40,60,80,100)
    //il valore dei punti della singola casella è deciso durante la chiamata del costruttore
    int punticasella ;

public:
    CasellaPunti(Casella* Destra = NULL, Casella* Sinistra = NULL);

    void applicaEffetto(Giocatore* player) override;
    void stampaMsg() override;

    virtual ~CasellaPunti();
};

#endif //GAMEOFTHEMADGOOSE_CASELLAPUNTI_H
