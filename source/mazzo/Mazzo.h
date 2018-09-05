//
// Created by stefanofa on 24/08/18.
//

#ifndef GAMEOFTHEMADGOOSE_MAZZO_H
#define GAMEOFTHEMADGOOSE_MAZZO_H

#include "../carta/Carta.h"
#include "../carta/CartaGOP.h"
#include "../carta/CartaRaddoppia.h"
#include "../carta/CartaInverti.h"
#include "../carta/CartaAbbassa.h"
#include "../carta/CartaImmunita.h"
#include "../carta/CartaIndovina.h"

#include <stdlib.h>     /* srand, rand */
#include <time.h> 		/* time */

#define n_effetti 6

enum Effetti { GOP = 0 , Raddoppia , Inverti , AbbassaAvversari , Immunity , IndovinaDado };
const int prob_effetti[n_effetti-1] = { 25 , 45 , 60 , 70 , 100 };
/*
 * Probabilità generazione carte da inserire nel mazzo in base all'effetto :
 * -GOP : ci sono sicuramente 3 e solo 3 carte di tipo GOP in ogni mazzo
 *
 * -Raddoppia = 25%
 * -Inverti   = 20%
 * -AbbassaAvversari = 15%
 * -Immunity = 10%
 * -IndovinaDado = 30%
 */


/*
cards[GOP] = new CartaGop();
cards[Raddoppia] = new CartaRaddoppia();
cards[Inverti] = new CartaInverti();
cards[AbbassaAvversari] = new CartaAbbassa();
cards[Immunity] = new CartaImmunita();
cards[IndovinaDado] = new CartaIndovina();
*/

struct lista_carte {
    Effetti card;
    lista_carte* next;
};

typedef lista_carte* ptr_lista_carte;

class Mazzo {

private:

    Carta* cards[n_effetti] = {
            new CartaGOP(),
            new CartaRaddoppia(),
            new CartaInverti(),
            new CartaAbbassa(),
            new CartaImmunita(),
            new CartaIndovina()
    };


    int dim_Mazzo;

    int ntipi_carte[n_effetti] = {0} ;

    ptr_lista_carte deckHead = NULL;



public:

    Mazzo(int carte_mazzo=40);
    //il costruttore inizializza un mazzo di almeno 40 carte formato da
    //3 carte standard di tipo "GOP" e le restanti carte
    //generate in base alla loro probabilit� prestabilita di essere create

    void decidi_numero_tipi_carte (int dim_Mazzo) ;

    ptr_lista_carte create_newDeck () ;

    Carta* effect_To_Card (Effetti effect) ;

    Carta* draw_Next_Card () ;

    virtual ~Mazzo() ;
};


#endif //GAMEOFTHEMADGOOSE_MAZZO_H
