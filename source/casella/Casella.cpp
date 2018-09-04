//
// Created by stefanofa on 24/08/18.
//

#include "Casella.h"


Casella::Casella(Casella* Destra, Casella* Sinistra) {
    this->Destra = Destra;
    this->Sinistra = Sinistra;
}

void Casella::setDestra (Casella *Destra) {
    this->Destra = Destra;
}

void Casella::setSinistra (Casella *Sinistra) {
    this->Sinistra = Sinistra;
}

Casella* Casella::getDestra() {
    return this->Sinistra;
}

Casella* Casella::getSinistra() {
    return this->Sinistra;
}


void Casella::applicaEffetto(Giocatore* player) {
//
}

/*void Casella::stampaMsg() {
//
}
*/

char* Casella::getMessage() {
    char* msg = (char*)malloc(sizeof(char)*100);

    strcat(msg,"Questa e' una casella vuota!");

    return msg;

}

int Casella::tipocasella() {
    return 0;
}

Casella::~Casella() {
    // TODO Auto-generated destructor stub
}
