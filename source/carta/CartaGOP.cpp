//
// Created by stefanofa on 05/09/18.
//

#include "CartaGOP.h"

CartaGOP::CartaGOP() {
    // TODO Auto-generated constructor stub

}

void CartaGOP::applicaEffetto (Giocatore* player) {

    clear_screen();
    cout << "Giocatore : " << player->getName() << endl << endl ;

    //effetto specifico
    player->foundGOP();

    cout << "Hai ottenuto una delle 3 carte GOP!" << endl ;
    cout << "Se possiedi due su tre carte GOP vinci immediatamente la partita!" << endl << endl;
    cout << "Al momento possiedi " << player->getnGOPCards() ;

    if (player->getnGOPCards() == 1 )   cout << " carta GOP!" ;
                                 else   cout << " carte GOP!" ;

    pause();

}

CartaGOP::~CartaGOP() {
    // TODO Auto-generated destructor stub
}
