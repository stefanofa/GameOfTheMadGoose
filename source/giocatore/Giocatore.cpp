//
// Created by stefanofa on 24/08/18.
//


#include "Giocatore.h"

Giocatore::Giocatore(char nome[20] , Giocatore* nextPlayer) {

    strcpy (this->nome,nome);
    this->punti = 0;

    this->dir = destra;
    this->immune.attivo = false;
    this->immune.num_turni = 0;
    this->doppiPunti.attivo = false;
    this->doppiPunti.num_turni = 0;
    this->fermo.attivo = false;
    this->fermo.num_turni = 0;

    this->nextPlayer = nextPlayer;

    this->has_GOP = 0;

}

/*
void Giocatore::setName(int n_gioc)  {
	cout << "Inserire il nome del " << n_gioc << "° giocatore :" ;
	cin >> this->nome;
}
*/

char* Giocatore::getName () {
    return this->nome;
}

void Giocatore::setDir (Direzione dir) {
    this->dir = dir;
}


void Giocatore::setCasella (Casella* cas) {
    this->onCasella = cas;
}


char* Giocatore::getStringDirection () {

    Direzione actualDir = this->dir;

    if (actualDir == destra) return "Destra\0";
    else return "Sinistra\0";

}

Direzione Giocatore::getDir() {
    return this->dir;
}


void Giocatore::setNextPlayer (Giocatore* player){
    this->nextPlayer = player;
}

Giocatore* Giocatore::getNextPlayer (){
    return this->nextPlayer;
}

void Giocatore::setImmunity (int num_turni) {

    if (this->immune.attivo) {
        this->immune.num_turni += num_turni;
    }
    else {
        this->immune.attivo = true;
        this->immune.num_turni = num_turni;
    }

}

void Giocatore::setDoublePoints(int num_turni) {

    if (this->doppiPunti.attivo) {
        this->doppiPunti.num_turni += num_turni;
    }
    else {
        this->doppiPunti.attivo = true;
        this->doppiPunti.num_turni = num_turni;
    }

}

void Giocatore::setFermo(int num_turni) {

    if (this->fermo.attivo) {
        this->fermo.num_turni += num_turni;
    }
    else {
        this->fermo.attivo = true;
        this->fermo.num_turni = num_turni;
    }

}

bool Giocatore::isImmune () {
    return this->immune.attivo;
}

bool Giocatore::hasDoublePoints () {
    return this->doppiPunti.attivo;
}

bool Giocatore::isFermo () {
    return this->fermo.attivo;
}

int Giocatore::howManyImmunityTurns() {
    return this->immune.num_turni;
}

int Giocatore::howManyDoublePointsTurns () {
    return this->doppiPunti.num_turni;
}

int Giocatore::howManyFermoTurns () {
    return this->fermo.num_turni;
}

void Giocatore::decTurniImmunity () {
    if (immune.num_turni == 1) this->immune.attivo = false;
    this->immune.num_turni -- ;
    this->immune.num_turni =
            (this->immune.num_turni > 0) ? this->immune.num_turni : 0 ;
}

void Giocatore::decTurniDoublePoints () {
    if (doppiPunti.num_turni == 1) this->doppiPunti.attivo = false;
    this->doppiPunti.num_turni -- ;
    this->doppiPunti.num_turni =
            (this->doppiPunti.num_turni > 0) ? this->doppiPunti.num_turni : 0 ;
}

void Giocatore::decTurniFermo () {
    if (fermo.num_turni == 1) this->fermo.attivo = false;
    this->fermo.num_turni -- ;
    this->fermo.num_turni =
            (this->fermo.num_turni > 0) ? this->fermo.num_turni : 0 ;
}

void Giocatore::add_points(int value) {
    if (!(this->isImmune() && value < 0))
    {
        this->punti += (this->hasDoublePoints()  && value>0) ? value*2 : value ;
        if (this->punti < 0) this->punti = 0;
    }
}

/*void Giocatore::Player_add_points (int value) {

    if (this->isImmune() && value < 0) {
        cout << "Per questo turno il giocatore " ;
        cout << this->getName() ;
        cout << " e' immune , non puo' perdere punti!" << endl ;
    }
    else {
        this->punti += (this->hasDoublePoints()  && value>0) ? value*2 : value ;
        if (this->punti < 0) this->punti = 0;
    }
}*/

int Giocatore::getPoints () {
    return this->punti;
}

void Giocatore::foundGOP () {
    this->has_GOP ++;
}

int Giocatore::getnGOPCards () {
    return this->has_GOP;
}

bool Giocatore::twoOfThree () {

    if(this->has_GOP == 2) return true;
    else return false;

}

Giocatore::~Giocatore() {
    // TODO Auto-generated destructor stub
}