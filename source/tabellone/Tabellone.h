//
// Created by stefanofa on 24/08/18.
//

#ifndef GAMEOFTHEMADGOOSE_TABELLONE_H
#define GAMEOFTHEMADGOOSE_TABELLONE_H

#include "../casella/Casella.h"
#include "../casella/CasellaFermo.h"
#include "../casella/CasellaPunti.h"
#include "../casella/CasellaPesca.h"
#include "../casella/CasellaSwitch.h"
#include <stdlib.h>
#include <time.h>

#define n_tipicaselle 4

enum TipiCaselle { Fermo = 0 , Pesca , Punti , Switch };
const int prob_casella[n_tipicaselle] = { 10, 55 , 85 , 100 };
/*
 * Probabilità generazione caselle da inserire nel tabellone in base al tipo :
 *
 * -Fermo  : 10%
 * -Pesca  : 45%
 * -Punti  : 30%
 * -Switch : 15%
 *
 */

class Tabellone {

private:
    int n_caselle;
    Casella* cStart = NULL;

public:
    Tabellone(int n_caselle = 50);

    int getnCaselle();

    Casella* generaTabellone(int n_caselle);

    Casella* getStart ();

    virtual ~Tabellone();
};



#endif //GAMEOFTHEMADGOOSE_TABELLONE_H
