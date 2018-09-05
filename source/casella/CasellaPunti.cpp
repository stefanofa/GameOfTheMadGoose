//
// Created by stefanofa on 01/09/18.
//

#include "CasellaPunti.h"



CasellaPunti::CasellaPunti(Casella* Destra, Casella* Sinistra) : Casella (Destra,Sinistra){
    this->punticasella = ((rand()%5) + 1)*20;
}

bool CasellaPunti::applicaEffetto(Giocatore* player) {

    this->stampaMsg();

    if (player->hasDoublePoints())
        cout << "Hai il Bonus 'DOPPI PUNTI' attivo, il tuo guadagno per questo turno e' raddoppiato!" << endl;

    player->add_points(this->punticasella);

    return false;

}


void CasellaPunti::stampaMsg() {

    cout << "Ti trovi sulla casella 'Guadagna Punti'. " <<endl;
    cout << "Questa casella ti fa ottenere " << this->punticasella << " punti." << endl;

    pause();

}


char* CasellaPunti::getMessage() {

    char* msg = (char*)malloc(sizeof(char)*150);
    char* num = (char*)malloc(sizeof(char)*4);


    strcat(msg,"Ti trovi sulla casella 'Guadagna Punti'. \n Questa casella ti fa ottenere ");
    sprintf(num,"%d",this->punticasella);
    strcat(msg,num);
    strcat(msg," punti.\n");

    return msg;

}

int CasellaPunti::tipocasella() {
    return 2;
}

CasellaPunti::~CasellaPunti() {
    // TODO Auto-generated destructor stub
}
