//
// Created by stefanofa on 01/09/18.
//

#include "CasellaPunti.h"

CasellaPunti::CasellaPunti(Casella* Destra, Casella* Sinistra) : Casella (Destra,Sinistra){
    this->punticasella = ((rand()%5) + 1)*20;
}

void CasellaPunti::applicaEffetto(Giocatore* player) {

    this->stampaMsg();

    if (player->hasDoublePoints())
        cout << "Hai il Bonus 'DOPPI PUNTI' attivo, il tuo guadagno per questo turno e' raddoppiato!" << endl;

    player->add_points(this->punticasella);


}

void CasellaPunti::stampaMsg() {

    cout << "Ti trovi sulla casella 'Guadagna Punti'. " <<endl;
    cout << "Questa casella ti fa ottenere " << this->punticasella << " punti." << endl;

    system("pause");

}

CasellaPunti::~CasellaPunti() {
    // TODO Auto-generated destructor stub
}
