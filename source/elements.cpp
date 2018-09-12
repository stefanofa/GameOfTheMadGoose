//
// Created by stefanofa on 01/09/18.
//


#include "elements.h"

#include <cstdio>
#include <iostream>
#include <cstring>
#include <limits>

using namespace std;





void clearCin() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Premere invio per continuare
void pause() {

#ifdef _WIN32
    system("pause");
#else
    clearCin();
    cin.putback('\n');
    cin.get();
#endif

    

}

int Throw(int n) {

    int value = 0;

    for (int i=0 ; i < n ; i++) {
        value += (rand()%6)+1;
    }

    return value;

}


/////////////////////////////////////////////////////////////////////////////////////////
//Funzioni ausiliarie per stampare il numero corretto di tab nella stampa dei giocatori//

int numberTab (int lenghtWord , int tabTotali) {

    int tmp=4;

    int nTab = tabTotali;

    if (lenghtWord >= 4) {
        nTab--;
        tmp+=4;
        while (tmp <= lenghtWord) {
            nTab--;
            tmp+=4;
        }
    }

    return nTab;

}

void stampaTab (int n) {
    for (int i=0 ; i < n ; i++) cout << "\t";
}

void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    // Assume POSIX
    system ("clear");
#endif

    cout << "+++++++ GAME OF THE MAD GOOSE +++++++" << endl << endl ;

}