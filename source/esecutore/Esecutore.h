//
// Created by stefanofa on 24/08/18.
//

#ifndef GAMEOFTHEMADGOOSE_ESECUTORE_H
#define GAMEOFTHEMADGOOSE_ESECUTORE_H


#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;

#include "../tabellone/Tabellone.h"

#include "../giocatore/Giocatore.h"
#include "../elements.h"


#define pointsToWin 1000

class Esecutore {

private:

    bool end = false;
    Giocatore* Winner = NULL;

    //istanza di mazzo che permette di pescare una carta (ritorna una carta)
    //utilizzando il metodo draw_Next_Card
    //Mazzo mazzo ;

    //
    int nGiocatori = 0;
    Giocatore* giocatoreAttuale = NULL ;

    Tabellone tabellone;


public:

    Esecutore();


    void stampaGiocatori();

    int decidiDimMazzo();
    Giocatore* createListaGiocatori ();

    virtual ~Esecutore();
};


#endif //GAMEOFTHEMADGOOSE_ESECUTORE_H
