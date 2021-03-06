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

#include "../mazzo/Mazzo.h"



#define pointsToWin 1000

class Esecutore {

private:

    bool end = false;
    Giocatore* Winner = NULL;

    int dimTab = 50;
    int dimMaz = 40;

    int nGiocatori = 0;
    Giocatore* giocatoreAttuale = NULL ;

    Tabellone tabellone;
    Mazzo mazzo;


public:

    Esecutore();


    void decidiDimMazzo();
    void decidiDimTabellone();

    Giocatore* createListaGiocatori ();

    void muoviGiocatore(int passi);

    void play();

    void initMatch ();

    void stampaGiocatori();


    void stampaVincitore(Giocatore *player);

    virtual ~Esecutore();
};


#endif //GAMEOFTHEMADGOOSE_ESECUTORE_H
