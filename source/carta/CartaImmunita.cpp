//
// Created by stefanofa on 05/09/18.
//

#include "CartaImmunita.h"

CartaImmunita::CartaImmunita() {
    // TODO Auto-generated constructor stub

}

void CartaImmunita::applicaEffetto (Giocatore* player) {

    clear_screen();

    cout << "Giocatore : " << player->getName() << endl << endl ;

    cout << "Hai pescato la carta Immunity!" << endl << endl;
    this->addPointsToPlayer(player);

    //effetto specifico
    int num_turni = 0;
    num_turni = (rand() % 3)+1 ;  //seleziona da 1 a 3 turni casualmente
    player->setImmunity(num_turni);

    cout << "Hai ottenuto l'effetto IMMUNE" << endl ;
    cout << "Nei prossimi " << player->howManyImmunityTurns() - 1 << " non potrai perdere punti!"
         << endl ;

    pause();
}

CartaImmunita::~CartaImmunita() {
    // TODO Auto-generated destructor stub
}
