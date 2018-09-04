//
// Created by stefanofa on 24/08/18.
//

#ifndef GAMEOFTHEMADGOOSE_TABELLONE_H
#define GAMEOFTHEMADGOOSE_TABELLONE_H

#include "../casella/Casella.h"
#include "../casella/CasellaFermo.h"
#include "../casella/CasellaPunti.h"
#include <stdlib.h>
#include <time.h>

#define n_tipicaselle 2

enum TipiCaselle { Fermo = 0 , Punti };
const int prob_casella[n_tipicaselle] = { 30 , 100 };
/*
 * Probabilità generazione caselle da inserire nel tabellone in base al tipo :
 *
 * -Fermo : 10%
 * -Pesca : 55%
 * -Punti : 35%
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
