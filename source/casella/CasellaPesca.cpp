//
// Created by stefanofa on 05/09/18.
//

#include "CasellaPesca.h"

CasellaPesca::CasellaPesca(Casella* Destra, Casella* Sinistra) : Casella (Destra,Sinistra){

}

bool CasellaPesca::applicaEffetto (Giocatore* player) {

    this->stampaMsg();

    return true;

}

void CasellaPesca::stampaMsg() {

    cout << "Ti trovi sulla casella 'Pesca una carta'. " <<endl;
    cout << "Premi INVIO per pescare una carta." << endl ;

    pause();

}

CasellaPesca::~CasellaPesca() {
    // TODO Auto-generated destructor stub
}
