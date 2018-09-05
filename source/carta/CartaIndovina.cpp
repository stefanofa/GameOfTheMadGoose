//
// Created by stefanofa on 05/09/18.
//

#include "CartaIndovina.h"

CartaIndovina::CartaIndovina() {
    // TODO Auto-generated constructor stub

}

void CartaIndovina::applicaEffetto(Giocatore* player) {


    cls();

    cout << "Giocatore : " << player->getName() << endl << endl ;

    int valore_previsto ;
    int valore_lancio_dado ;

    int punti_scommessi ;
    int punti_vinti_o_persi = 0;

    char tentativo ;
    bool primo = true;

    cout << "Hai trovato la carta INDOVINA." << endl ;
    cout << "Inserisci un numero da 1 a 6, scommetti i tuoi punti e lancia il dado: " << endl ;
    cout << "- se indovini ottieni il triplo dei punti scommessi" << endl ;
    cout << "- se sbagli perdi la quota scommessa." << endl ;

    //se il giocatore non ha punti non può effettuare alcuna giocata
    if (player->getPoints() <= 0) cout <<"Hai 0 punti a disposizione, non puoi effettuare la giocata!" ;

    else {

        //controllo per verificare se il giocatore vuole effettuare la giocata
        primo = true;
        do {

            if (primo) primo = false;
            else cout << "ERRORE - Hai inserito un valore non consentito!" << endl;

            cout << "Inserisci :" << endl ;
            cout << "'s' per tentare la fortuna e lanciare il dado" << endl ;
            cout << "'n' per non rischiare" << endl ;
            cout << "->";
            cin >> tentativo ;


        } while (tentativo != 's' && tentativo != 'n') ;

        //inserimento di quanti punti si vogliono scommettere
        if (tentativo == 's') {

            primo = true;
            do {

                if (primo) {
                    primo = false;
                    cout << "Hai a disposizione " << player->getPoints() << "." << endl ;
                }
                else { cout << "ERRORE - Hai inserito un valore non consentito!" << endl ;
                    cout << "Puoi scommettere al massimo " ;
                    cout << player->getPoints() << " punti!" << endl ;
                }

                cout << "Quanti punti vuoi scommettere?" << endl ;
                cout << "->" ;
                cin >> punti_scommessi ;


            } while (punti_scommessi > player->getPoints() || punti_scommessi < 0) ;

        }

        //inserimento del valore previsto dal lancio del dado
        if (tentativo == 's') {

            primo = true;
            do {

                if (primo) primo = false;
                else { cout << "ERRORE - Hai inserito un valore non consentito!" << endl ;
                    cout << "Devi inserire un numero compreso fra 1 e 6 !" << endl ;
                }

                cout << "Che valore pensi uscira' dal dado?" << endl ;
                cout << "->" ;
                cin >> valore_previsto ;


            } while (valore_previsto < 1 || valore_previsto > 6) ;

        }

        valore_lancio_dado = Throw() ;

        if (valore_lancio_dado == valore_previsto) {
            cout << "COMPLIMENTI , hai vinto " << punti_scommessi * coeffIndovina
                 << " punti !" << endl ;

            player->add_points(punti_scommessi * coeffIndovina) ;
        } else {
            cout << "Mi dispiace , hai perso " << punti_scommessi ;
            //<< ((punti_scommessi *-1)==1) ? " punto!" :" punti !" << endl ;
            if ((punti_scommessi * -1) == 1) cout << " punto!" << endl;
            else 							 cout << " punti!" << endl;

            player->add_points(punti_scommessi * -1) ;
        }


    }

    pause();


}

CartaIndovina::~CartaIndovina() {
    // TODO Auto-generated destructor stub
}
