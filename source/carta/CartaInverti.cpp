//
// Created by stefanofa on 05/09/18.
//

#include "CartaInverti.h"

CartaInverti::CartaInverti() {
    // TODO Auto-generated constructor stub

}

void CartaInverti::applicaEffetto (Giocatore* player) {


    clear_screen();

    cout << "Giocatore : " << player->getName() << endl << endl ;


    cout << "Hai pescato la carta InvertiDirezione!" << endl << endl ;
    this->addPointsToPlayer(player);

    //effetto specifico
    if (player->getDir() == destra) player->setDir(sinistra) ;
    else player->setDir(destra) ;

    cout << "Da ora in poi la tua direzione sarà invertita, " ;
    cout << "ti sposterai verso " << player->getStringDirection() << "!" << endl ;

    pause();

}

CartaInverti::~CartaInverti() {
    // TODO Auto-generated destructor stub
}
