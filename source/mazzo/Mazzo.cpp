//
// Created by stefanofa on 24/08/18.
//

#include "Mazzo.h"


Mazzo::Mazzo(int carte_mazzo) {

    srand (time(NULL)); //successivamente la variabile time sarà inizializzata
    //solo una volta dall'istanza esecutore

    ntipi_carte[GOP] = 3;


    this->dim_Mazzo = carte_mazzo;
    this->decidi_numero_tipi_carte (carte_mazzo) ;

    this->deckHead = create_newDeck() ;

}



void Mazzo::decidi_numero_tipi_carte (int dim_Mazzo ) {

    //indice di prababilità di generare una carta del tipo "effetto"
    //da inserire nel mazzo creato casualmente durante l'esecuzione del gioco.
    //è esclusa la probabilità per l'effetto "EXODIA" in quanto ci saranno sicuramente
    //solo 3 carte prestabilite nel mazzo (G,O,P)

    this->dim_Mazzo = (dim_Mazzo > 40 && dim_Mazzo <= 100) ? dim_Mazzo : 40 ;

    int x;

    int i=0;
    while (i < this->dim_Mazzo - 3) {

        x = rand() % 100 ;

        int j = 0;
        while ( x >= prob_effetti[j] )
        {
            j++;
        }

        this->ntipi_carte[j+1] ++ ;
        i++;
    }

}

ptr_lista_carte Mazzo::create_newDeck () {

    int tmptipi[n_effetti] ;

    for (int i = 0 ; i < n_effetti ; i++) {

        tmptipi[i] = ntipi_carte[i];

    }

    ptr_lista_carte tmp = NULL;
    this->deckHead = new lista_carte;
    tmp = this->deckHead;

    int num = rand() % n_effetti;

    tmp->card = (Effetti)num;
    tmptipi[num] -- ;

    for (int i=1 ; i < this->dim_Mazzo ; i++) {

        tmp -> next = new lista_carte;
        tmp = tmp -> next ;

        num = rand() % n_effetti;

        while (tmptipi[num] == 0) {  //aggiunge al mazzo il primo effetto
            num = (num + 1) % n_effetti;	   //ancora disponibile
        }

        tmp -> card = (Effetti)num ;
        tmptipi[num] -- ;


    }

    tmp -> next = NULL ;

    return deckHead ;

}

Carta* Mazzo::effect_To_Card(Effetti effect) {
    return this->cards[effect];
}

Carta* Mazzo::draw_Next_Card() {

    Effetti tmp;
    ptr_lista_carte p;

    if (this -> deckHead == NULL)
        this -> deckHead = this -> create_newDeck() ;


    tmp = this -> deckHead -> card ;

    p = this -> deckHead;
    this -> deckHead = p -> next ;
    delete(p);

    if (tmp == GOP) {
        this -> dim_Mazzo -- ;
        this -> ntipi_carte[GOP] -- ;
    }


    return effect_To_Card (tmp) ;

}

Mazzo::~Mazzo() {}

