//
// Created by stefanofa on 08/09/18.
//

#include "CasellaSwitch.h"


CasellaSwitch::CasellaSwitch(Casella* Destra, Casella* Sinistra) : Casella (Destra,Sinistra){

}

bool CasellaSwitch::applicaEffetto (Giocatore* player) {

    this->stampaMsg();
    cout << player->getNextPlayer()->getName() << " ." << endl ;
    pause();


    Casella* tmp = player->getCasella();
    player->setCasella(player->getNextPlayer()->getCasella());
    player->getNextPlayer()->setCasella(tmp);


    return false;

}


void CasellaSwitch::stampaMsg() {

    cout << "Sei capitato sulla casella 'Cambia Posizione' "<< endl;
    cout << "La tua posizione sara' invertita con il giocatore " ;

    //pause();

}


char* CasellaSwitch::getMessage() {

    char* msg = (char*)malloc(sizeof(char)*150);



    strcat(msg,"Questa volta sei stato sfortunato! \n Sei capitato sulla casella 'Resta fermo al prossimo turno'");

    return msg;

}

int CasellaSwitch::tipocasella() {
    return 1;
}

CasellaSwitch::~CasellaSwitch() {
    // TODO Auto-generated destructor stub
}
