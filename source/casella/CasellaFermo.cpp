//
// Created by stefanofa on 01/09/18.
//

#include "CasellaFermo.h"

CasellaFermo::CasellaFermo(Casella* Destra, Casella* Sinistra) : Casella (Destra,Sinistra){

}

bool CasellaFermo::applicaEffetto (Giocatore* player) {

    this->stampaMsg();

    //player->setCasella(this);

    if (player->isImmune()) cout << "Per questa volta ti e' andata bene!" << endl
                                 << "Il giocatore " << player->getName() << " e' immune,"
                                 << " non puo' essere affetto da malus!";
    else {
        player->setFermo(1);
        cout << "Durante il prossimo turno non effettuerai la giocata.";
    }

    return false;

}


void CasellaFermo::stampaMsg() {

    cout << "Questa volta sei stato sfortunato!" << endl;
    cout << "Sei capitato sulla casella 'Resta fermo al prossimo turno'" << endl;

    pause();

}


char* CasellaFermo::getMessage() {

    char* msg = (char*)malloc(sizeof(char)*150);



    strcat(msg,"Questa volta sei stato sfortunato! \n Sei capitato sulla casella 'Resta fermo al prossimo turno'");

    return msg;

}

int CasellaFermo::tipocasella() {
    return 1;
}

CasellaFermo::~CasellaFermo() {
    // TODO Auto-generated destructor stub
}
