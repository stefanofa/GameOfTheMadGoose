//
// Created by stefanofa on 15/09/18.
//

#include "CasellaAllOrNothing.h"



CasellaAllOrNothing::CasellaAllOrNothing(Casella* Destra, Casella* Sinistra) : Casella (Destra,Sinistra){

}

bool CasellaAllOrNothing::applicaEffetto (Giocatore* player) {

    this->stampaMsg();

    int dado_uno , dado_due ;

    bool pareggio = true;

    while (pareggio) {

        cout << player->getName() << " premi INVIO per lanciare il dado!" << endl ;
        pause();

        dado_uno = Throw();

        cout << "VALORE LANCIO DADO -> " << dado_uno << endl << endl ;

        pause();

        cout << player->getNextPlayer()->getName() << " premi INVIO per lanciare il dado!" << endl ;
        pause();

        dado_due = Throw();

        cout << "VALORE LANCIO DADO -> " << dado_due << endl << endl ;

        pause();

        if (dado_uno != dado_due) pareggio = false;

        else cout << "Avete ottenuto lo stesso punteggio, vi tocca riprovare!" << endl << endl ;


    }

    if (dado_uno > dado_due) {

        cout << "Complimenti " << player->getName() << ", hai vinto la bellezza di " << player->getNextPlayer()->getPoints() << " punti!!" << endl ;
        player->add_points(player->getNextPlayer()->getPoints());
        player->getNextPlayer()->setPoints(0);

    }
    else {

        cout << "Complimenti " << player->getNextPlayer()->getName() << ", hai vinto la bellezza di " << player->getPoints() << " punti!!" << endl ;
        player->getNextPlayer()->add_points(player->getPoints());
        player->setPoints(0);

    }


    pause();

    return false;

}


void CasellaAllOrNothing::stampaMsg() {

    cout << "ATTENZIONE!! Sei capitato sulla casella AllOrNothing!" << endl;
    cout << "Tu ed il giocatore successivo vi affronterete in una sfida all'ultimo tiro di dado!!" << endl;
    cout << "Dovrete entrambi lanciare il dado, chi vincera' acquisira' TUTTI i punti del perdente." << endl ;
    cout << "SCALDATE I DADI!!" << endl << endl ;

    pause();

}


char* CasellaAllOrNothing::getMessage() {

    char* msg = (char*)malloc(sizeof(char)*150);



    strcat(msg,"Questa volta sei stato sfortunato! \n Sei capitato sulla casella 'Resta fermo al prossimo turno'");

    return msg;

}

int CasellaAllOrNothing::tipocasella() {
    return 1;
}

CasellaAllOrNothing::~CasellaAllOrNothing() {
    // TODO Auto-generated destructor stub
}