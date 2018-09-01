//
// Created by stefanofa on 24/08/18.
//

#include "Esecutore.h"

Esecutore::Esecutore() {

    srand(time(NULL));

    this->end = false;
    this->Winner = NULL;

    this->giocatoreAttuale = createListaGiocatori() ;



}

void Esecutore::stampaGiocatori() {


    for (int i=0; i<nGiocatori; i++) {

        cout<<this->giocatoreAttuale->getName() << endl;
        this->giocatoreAttuale = this->giocatoreAttuale->getNextPlayer();

    }


}


Giocatore* Esecutore::createListaGiocatori () {

    Giocatore* primoGiocatore = NULL;
    Giocatore* tmp = NULL;
    Giocatore* tmpPrev = NULL;

    bool primo = true;

    char nome[20];

    do {

        if (!primo) {
            cls();
            cout << "ERRORE - HAI INSERITO UN VALORE NON CONSENTITO!" << endl;
        }

        cout << "Quanti giocatori siete?" << endl ;
        cout << "Inserisci un numero compreso tra 2 e 10 e premi invio per continuare." << endl;
        cout << "->";
        cin >> this->nGiocatori;

        if (primo) primo = false;

    } while (this->nGiocatori < 2 || this->nGiocatori >10) ;

    int i = 1;

    cls();

    cout << "Inserisci il nome del " << i << "° giocatore." << endl ;
    cout << "->";
    cin >> nome;

    primoGiocatore = new Giocatore(nome,NULL);
    tmpPrev = primoGiocatore;

    i++;

    for (;i <= this->nGiocatori; i++) {

        cls();

        cout << "Inserisci il nome del " << i << "° giocatore." << endl ;
        cout << "->";
        cin >> nome;

        tmp = new Giocatore(nome,NULL);
        tmpPrev->setNextPlayer(tmp);
        tmpPrev = tmp;

    }


    tmpPrev->setNextPlayer(primoGiocatore);

    return primoGiocatore;


}

Esecutore::~Esecutore() {
    // TODO Auto-generated destructor stub
}