//
// Created by stefanofa on 05/09/18.
//

#include "CartaAbbassa.h"

CartaAbbassa::CartaAbbassa() {
    // TODO Auto-generated constructor stub

}

void CartaAbbassa::applicaEffetto(Giocatore* player) {

    cls();

    cout << "Giocatore : " << player->getName() << endl << endl ;

    Giocatore* tmp = player->getNextPlayer() ;

    cout << "Hai trovato la carta ABBASSA PUNTEGGIO AVVERSARI." << endl ;
    cout << "I tuoi avversari perderanno "<< -1 * coeffabbassa << " punti!" << endl ;

    while (tmp != player) {
        tmp->add_points_abbassa(coeffabbassa);
        tmp = tmp->getNextPlayer();
    }

    pause();

}

CartaAbbassa::~CartaAbbassa() {
    // TODO Auto-generated destructor stub
}
