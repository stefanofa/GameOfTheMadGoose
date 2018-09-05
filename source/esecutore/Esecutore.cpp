//
// Created by stefanofa on 24/08/18.
//

#include "Esecutore.h"

Esecutore::Esecutore() {

    srand(time(NULL));

    this->end = false;
    this->Winner = NULL;

    this->tabellone = Tabellone(57);

    this->mazzo = Mazzo();

    this->giocatoreAttuale = createListaGiocatori() ;



}

void Esecutore::stampaGiocatori() {

    Casella* tmp;

    for (int i=0; i<nGiocatori; i++) {

        cout<<this->giocatoreAttuale->getName() << endl;

     //   cout<<"TIPOCASELLA : " << this->giocatoreAttuale->getCasella()->tipocasella() << endl;
     //   cout <<this->giocatoreAttuale->getCasella()->getMessage();

        pause();

        cout << endl << "tipocasella : " << giocatoreAttuale->getCasella()->tipocasella() << endl;

        cout <<"PUNTI PRIMA : " << this->giocatoreAttuale->getPoints() << endl;

        tmp = this->giocatoreAttuale->getCasella();
        tmp->applicaEffetto(this->giocatoreAttuale);

        cout <<"PUNTI DOPO : " << this->giocatoreAttuale->getPoints() << endl;

        this->giocatoreAttuale = this->giocatoreAttuale->getNextPlayer();

    }

    Carta* cartaesempio ;
    cartaesempio = mazzo.draw_Next_Card();

    cartaesempio->applicaEffetto(this->giocatoreAttuale);


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

    primoGiocatore = new Giocatore(nome,NULL,tabellone.getStart());
    tmpPrev = primoGiocatore;

    i++;

    for (;i <= this->nGiocatori; i++) {

        cls();

        cout << "Inserisci il nome del " << i << "° giocatore." << endl ;
        cout << "->";
        cin >> nome;

        tmp = new Giocatore(nome,NULL,tabellone.getStart());
        tmpPrev->setNextPlayer(tmp);
        tmpPrev = tmp;

    }


    tmpPrev->setNextPlayer(primoGiocatore);

    return primoGiocatore;


}

Esecutore::~Esecutore() {
    // TODO Auto-generated destructor stub
}