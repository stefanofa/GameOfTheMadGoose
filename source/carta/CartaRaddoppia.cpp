//
// Created by stefanofa on 05/09/18.
//

#include "CartaRaddoppia.h"

CartaRaddoppia::CartaRaddoppia() {
    // TODO Auto-generated constructor stub

}

void CartaRaddoppia::applicaEffetto (Giocatore* player) {


    clear_screen();

    cout << "Giocatore : " << player->getName() << endl << endl ;

    cout << "Hai pescato la carta DoublePoints!" << endl << endl ;
    this->addPointsToPlayer(player);

    //effetto specifico
    int num_turni = 0;
    num_turni = (rand() % 3)+1 ;  //seleziona da 1 a 3 turni casualmente
    player->setDoublePoints(num_turni);

    cout << "Hai ottenuto l'effetto RADDOPPIA" << endl ;
    cout << "Nei prossimi " << player->howManyDoublePointsTurns() << " turni otterrai doppi punti!"
         << endl ;

    pause();

}

CartaRaddoppia::~CartaRaddoppia() {
    // TODO Auto-generated destructor stub
}
