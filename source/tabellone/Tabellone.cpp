//
// Created by stefanofa on 24/08/18.
//

#include "Tabellone.h"

Tabellone::Tabellone(int n_caselle) {

    this->n_caselle = n_caselle;
    this->cStart = this->generaTabellone(this->n_caselle);


}

int Tabellone::getnCaselle() {
    return this->n_caselle;
}

Casella* Tabellone::generaTabellone (int n_caselle) {

    srand((unsigned)time(nullptr));

    Casella* first;
    Casella* tmp;
    Casella* prev;

    this->n_caselle = (n_caselle > 50 && n_caselle <= 100) ? n_caselle : 50 ;

    int x;

    x = rand() % 100 ;


    int j = 0;
    while ( x >= prob_casella[j] )
    {
        j++;
    }



    switch (j) {
        case 0:
            first = new CasellaFermo();
            break;

        case 1:
            first = new CasellaPesca();
            break;

        case 2:
            first = new CasellaPunti();
            break;

        case 3:
            first = new CasellaSwitch();
            break;

        default:
            first = new Casella();
            break;
    }


    prev = first;


    for (int i = 1; i < this->n_caselle ; i++) {

        x = rand() % 100 ;

        j = 0;
        while ( x >= prob_casella[j] )
        {
            j++;
        }


        switch (j) {
            case 0:
                tmp = new CasellaFermo(NULL,prev);
                break;

            case 1:
                tmp = new CasellaPesca(NULL,prev);
                break;

            case 2:
                tmp = new CasellaPunti(NULL,prev);
                break;

            case 3:
                tmp = new CasellaSwitch(NULL,prev);
                break;

            default:
                tmp = new Casella(NULL,prev);
                break;
        }

        prev->setDestra(tmp);
        tmp->setSinistra(prev);

        prev = tmp;




    }

    tmp->setDestra(first);
    first->setSinistra(prev);

    return first;

}

Casella* Tabellone::getStart () {
    return this->cStart;
}


Tabellone::~Tabellone() {
    // TODO Auto-generated destructor stub
}
