//
// Created by stefanofa on 24/08/18.
//


#include "Giocatore.h"

Giocatore::Giocatore(char nome[20] , Giocatore* nextPlayer , Casella* cas ) {

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

    this->onCasella = cas;

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

Casella* Giocatore::getCasella() {
    return this->onCasella;
}


//ritorna una stringa che indica la direzione del giocatore passato come parametro
char* Giocatore::getStringDirection () {

    char* parolaD = (char*) malloc(sizeof(char)*9);
    char* parolaS = (char*) malloc(sizeof(char)*9);

    strcpy(parolaD,"Destra");
    strcpy(parolaS,"Sinistra");



    if (dir == destra) return parolaD;
    else return parolaS;

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

/*
 * per i metodi setImmunity,setDoublePoints,setFermo si ha un '+1'
 * che è stato introdotto in quanto durante ogni fine del turno
 * queste variabili vengono decrementate automaticamente se positive,
 * il '+1' permette quindi di non considerare il turno nei quali si sono ottenuti tali effetti
 * come turni nei quali sono stati utilizzati effettivamente questi effetti
 */

void Giocatore::setImmunity (int num_turni) {

    if (this->immune.attivo) {
        this->immune.num_turni += num_turni;
    }
    else {
        this->immune.attivo = true;
        this->immune.num_turni = num_turni +1;
    }

}

void Giocatore::setDoublePoints(int num_turni) {

    if (this->doppiPunti.attivo) {
        this->doppiPunti.num_turni += num_turni;
    }
    else {
        this->doppiPunti.attivo = true;
        this->doppiPunti.num_turni = num_turni +1;
    }

}

void Giocatore::setFermo(int num_turni) {

    if (this->fermo.attivo) {
        this->fermo.num_turni += num_turni;
    }
    else {
        this->fermo.attivo = true;
        this->fermo.num_turni = num_turni +1;
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
        if (value < 0 ) this->punti += value ;
        else this->punti += (this->hasDoublePoints()  && value>0) ? value*2 : value ;

        if (this->punti < 0) this->punti = 0;
    }
}

void Giocatore::add_points_abbassa(int value) {
    if (!(this->isImmune() && value < 0))
    {
        if (value < 0 ) this->punti += value ;
        else this->punti += (this->hasDoublePoints()  && value>0) ? value*2 : value ;

        if (this->punti < 0) this->punti = 0;
    }
    else cout << "Il giocatore " << this->getName() << " e' IMMUNE , non puo' perdere punti questo turno." << endl ;
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

void Giocatore::setPoints(int num) {

    if(num >= 0) this->punti = num;
    else this->punti = 0;

}

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