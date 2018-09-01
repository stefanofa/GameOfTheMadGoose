//
// Created by stefanofa on 24/08/18.
//

#ifndef GAMEOFTHEMADGOOSE_GIOCATORE_H_
#define GAMEOFTHEMADGOOSE_GIOCATORE_H_

#include <cstring>
#include "../casella/Casella.h"


struct effettoAturni {
    bool attivo = false;
    int num_turni = 0;
};

enum Direzione {destra = 0 , sinistra};

class Giocatore {

private:

    Casella* onCasella = NULL;

    char nome[20];
    int punti;
    Direzione dir;
    effettoAturni immune;
    effettoAturni doppiPunti;
    effettoAturni fermo;

    Giocatore* nextPlayer;

    int has_GOP;


public:

    Giocatore(char nome[20] , Giocatore* nextPlayer = NULL);

    void setCasella (Casella* cas);

    void setDir (Direzione dir);

    char* getStringDirection ();
    Direzione getDir ();


    void setNextPlayer (Giocatore* player);
    Giocatore* getNextPlayer ();

    char* getName();

    void setImmunity (int num_turni);
    void setDoublePoints (int num_turni);
    void setFermo (int num_turni=1);

    bool isImmune();
    bool hasDoublePoints();
    bool isFermo();

    int howManyImmunityTurns();
    int howManyDoublePointsTurns();
    int howManyFermoTurns();

    void decTurniImmunity();
    void decTurniDoublePoints();
    void decTurniFermo();

    int getPoints();

    void foundGOP();
    int getnGOPCards() ;


    void add_points (int value);
    //void Player_add_points (int value) ;

    bool twoOfThree ();
    //void setName(int n_gioc);

    virtual ~Giocatore();
};

#endif /* GAMEOFTHEMADGOOSE_GIOCATORE_H_ */