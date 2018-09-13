//
// Created by stefanofa on 24/08/18.
//

#include "Esecutore.h"

Esecutore::Esecutore() {

    srand(time(NULL));

    this->end = false;
    this->Winner = NULL;

    this->initMatch();

    this->tabellone = Tabellone(this->dimTab);

    this->mazzo = Mazzo(this->dimMaz);


}



void Esecutore::decidiDimMazzo() {

    bool primo = true;

    clear_screen();

    do {

        if (!primo) {
            clear_screen();
            cout << "ERRORE - HAI INSERITO UN VALORE NON CONSENTITO!" << endl;
        }

        cout << "Ora dovete decidere la dimensione del mazzo di carte." << endl ;
        cout << "Inserite un numero compreso tra 40 e 100 e premete invio per continuare." << endl;
        cout << "->";
        cin >> this->dimMaz;

        if (primo) primo = false;

    } while (this->dimMaz < 40 || this->dimMaz >100) ;


}

void Esecutore::decidiDimTabellone() {

    bool primo = true;


    clear_screen();


    do {

        if (!primo) {
            clear_screen();
            cout << "ERRORE - HAI INSERITO UN VALORE NON CONSENTITO!" << endl;
        }

        cout << "Ora dovete decidere la dimensione del tabellone." << endl ;
        cout << "Inserite un numero compreso tra 50 e 100 e premete invio per continuare." << endl;
        cout << "->";
        cin >> this->dimTab;

        if (primo) primo = false;

    } while (this->dimTab < 50 || this->dimTab >100) ;


}


void Esecutore::initMatch() {

    clear_screen();


    cout << "Benvenuti nel gioco dell'oca pazza, dove tutto puo' succedere!" ;

    cout << endl << endl ;

    cout << "A breve i nostri folletti genereranno il tabellone ed il mazzo di carte," << endl <<
            "abbiamo pero' bisogno che ci forniate alcune informazioni." << endl << endl;

    this->giocatoreAttuale = createListaGiocatori() ;

    this->decidiDimMazzo();

    this->decidiDimTabellone();

    clear_screen();

    pause ();

    cout << "Perfetto, siamo quasi pronti! " << endl << endl ;
    cout << this->giocatoreAttuale->getName() << " premi INVIO per iniziare!!!";

    pause();

}

void Esecutore::play () {


    Carta* cartatmp;


    Casella* tmpCasella = this->giocatoreAttuale->getCasella();
    int val_dado;

    while (!end) {

        clear_screen();
        stampaGiocatori();

        cout << "E' il turno di " << this->giocatoreAttuale->getName() << "!" << endl << endl;

        //se il giocatore non deve stare fermo, gioca il suo turno
        if (!(this->giocatoreAttuale->isFermo())) {
            //azioni del turno giocatore
            cout << "Premi invio per lanciare il dado.";
            pause();
            val_dado = Throw();
            cout << " -> Hai ottenuto " << val_dado << endl << endl;
            muoviGiocatore(val_dado);
            tmpCasella = this->giocatoreAttuale->getCasella();
            if(tmpCasella->applicaEffetto(this->giocatoreAttuale)) {
                cartatmp = mazzo.draw_Next_Card();
                cartatmp -> applicaEffetto(this->giocatoreAttuale);
            }
        }
        else  {
            cout << this->giocatoreAttuale->getName()<<  " toccherebbe a te, ma per questo turno non puoi lanciare il dado!!" << endl << endl ;
            pause();
        }

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



    }

    stampaVincitore(this->Winner);

}

void Esecutore::stampaGiocatori() {

    clear_screen();

    Giocatore* tmp = this->giocatoreAttuale;


    cout << "*******ELENCO GIOCATORI*******" << endl << endl;


    cout << "Nome \t\t\tPunti\t\t" << endl << endl ;

    for (int i=0; i<nGiocatori; i++) {

        cout<<tmp->getName();
        stampaTab(numberTab(strlen(tmp->getName()),4));  //stampa numero di tab in base alla lunghezza del nome del giocatore
        cout<< tmp->getPoints() << endl;






        tmp = tmp->getNextPlayer();

    }

    cout << endl ;
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
            clear_screen();
            cout << "ERRORE - HAI INSERITO UN VALORE NON CONSENTITO!" << endl;
        }

        cout << "Quanti giocatori siete?" << endl ;
        cout << "Inserisci un numero compreso tra 2 e 10 e premi invio per continuare." << endl;
        cout << "->";
        cin >> this->nGiocatori;

        if (primo) primo = false;

    } while (this->nGiocatori < 2 || this->nGiocatori >10) ;

    int i = 1;

    clear_screen();

    cout << "Inserisci il nome del " << i << "° giocatore." << endl ;
    cout << "->";
    cin >> nome;

    primoGiocatore = new Giocatore(nome,NULL,tabellone.getStart());
    tmpPrev = primoGiocatore;

    i++;

    for (;i <= this->nGiocatori; i++) {

        clear_screen();

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

    clear_screen();

    cout << "Complimenti " << player->getName() << "!" << endl << endl;

    if (player->twoOfThree()) {
        cout << "Hai trovato 2 carte GOP, sei il vincitore della partita!" << endl;
    }
    else cout << "Hai guadagnato " << player->getPoints() << " punti, sei il vincitore della partita!" << endl;

    pause();




}


Esecutore::~Esecutore() {
    // TODO Auto-generated destructor stub
}