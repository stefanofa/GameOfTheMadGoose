//
// Created by stefanofa on 05/09/18.
//

#include "Carta.h"

Carta::Carta() = default;

void applicaEffetto (Giocatore* player) {

}

void Carta::addPoints(Giocatore* player , int value) {

    /*if (player->isImmune() && value < 0) {
        cout << "Per questo turno il giocatore " ;
        cout << player->getName() ;
        cout << " e' immune , non puo' perdere punti!" << endl ;
    } else */

    player->add_points(value);

}

void Carta::addPointsToPlayer(Giocatore* player) {

    cout << "Tira il dado per moltiplicare i punti ottenuti." << endl ;
    pause();

    int value;
    int valoredado;

    valoredado = Throw(1);

    cout << "Dado = " << valoredado << endl ;
    value = coeff_punti * valoredado ;

    cout << "Hai ottenuto " << value << " punti!" << endl ;

    this->addPoints (player , value) ;

    cout << "Il tuo punteggio attuale e' : " << player->getPoints() << "!" << endl ;

    pause();

}

void Carta::applicaEffetto(Giocatore* player) {

}


Carta::~Carta() {}