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

void Esecutore::play () {

    stampaGiocatori();
    pause();

    Carta* cartatmp;

    Giocatore* tmpPrimo = this->giocatoreAttuale;
    Casella* tmpCasella = this->giocatoreAttuale->getCasella();
    int val_dado;

    while (!end) {

        //se il giocatore non deve stare fermo, gioca il suo turno
        if (!(this->giocatoreAttuale->isFermo())) {
            //azioni del turno giocatore
            cout << "Lancio del dado.";
            pause();
            val_dado = Throw();
            cout << " -> Hai ottenuto " << val_dado << endl ;
            muoviGiocatore(val_dado);
            tmpCasella = this->giocatoreAttuale->getCasella();
            if(tmpCasella->applicaEffetto(this->giocatoreAttuale)) {
                cartatmp = mazzo.draw_Next_Card();
                cartatmp -> applicaEffetto(this->giocatoreAttuale);
            }
        }
        else cout << this->giocatoreAttuale->getName()<<  ", per questo turno non puoi lanciare il dado!!" << endl << endl ;

        //se il giocatore ha dei bonus/malus , decrementa il loro valore alla fine del turno
        if(this->giocatoreAttuale->isFermo()) this->giocatoreAttuale->decTurniFermo();
        else {
            if(this->giocatoreAttuale->isImmune()) this->giocatoreAttuale->decTurniImmunity();
            if(this->giocatoreAttuale->hasDoublePoints()) this->giocatoreAttuale->decTurniDoublePoints();
        }



        //se il giocatore ha vinto nel turno attuale
        if(this->giocatoreAttuale->twoOfThree() ||
           this->giocatoreAttuale->getPoints()>=pointsToWin)
        {
            end = true;
            this->Winner = this->giocatoreAttuale;
        }
            //se il giocatore non ha vinto nel turno
            //passa il turno al giocatore successivo
        else this->giocatoreAttuale = this->giocatoreAttuale->getNextPlayer();

        //stampaClassifica();

    }

    stampaVincitore(this->Winner);

}

void Esecutore::stampaGiocatori() {

    clear_screen();

    Giocatore* tmp = this->giocatoreAttuale;


    cout << "*******ELENCO GIOCATORI*******" << endl;
    cout << "\t\t\t\t\t\t\t *" << endl ;

    cout << "Nome \t\t\tPunti\t\t *" << endl ;
    cout << "\t\t\t\t\t\t\t *" << endl ;
    for (int i=0; i<nGiocatori; i++) {

        cout<<tmp->getName();
        stampaTab(numberTab(strlen(tmp->getName()),4));  //stampa numero di tab in base alla lunghezza del nome del giocatore
        cout<< tmp->getPoints();

        cout << "\t\t\t *" << endl ;




        tmp = tmp->getNextPlayer();

    }

    cout << "\t\t\t\t\t\t\t *" << endl ;
    cout <<"******************************";

    cout << endl << endl ;


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

void Esecutore::muoviGiocatore (int passi) {

    Casella* tmp = this->giocatoreAttuale->getCasella();

    if (this->giocatoreAttuale->getDir() == destra) {
        for (int i = 0; i < passi ; i++)
            tmp = tmp->getDestra();
    } else {
        for (int i = 0; i < passi ; i++)
            tmp = tmp->getSinistra();
    }

    this->giocatoreAttuale->setCasella(tmp);


}

void Esecutore::stampaVincitore (Giocatore* player) {

    cout << "Complimenti " << player->getName() << "!" << endl;

    if (player->twoOfThree()) {
        cout << "Hai trovato 2 carte GOP, sei il vincitore della partita!" << endl;
    }
    else cout << "Hai guadagnato " << player->getPoints() << " punti, sei il vincitore della partita!" << endl;

    cout << endl ;

    //stampaClassifica();
}


Esecutore::~Esecutore() {
    // TODO Auto-generated destructor stub
}