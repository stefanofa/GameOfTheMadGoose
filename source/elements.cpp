//
// Created by stefanofa on 01/09/18.
//


#include "elements.h"

#include <cstdio>
#include <iostream>
#include <cstring>
#include <limits>

using namespace std;



void cls() {
    //for (int i = 0; i < 10; ++i) printf( "\n\n\n\n\n\n\n\n\n\n" );
    for (int i = 0; i < 150; ++i) {
        cout << "/";
    }
    cout << endl;
}

void clearCin() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Premere invio per continuare
void pause() {
    clearCin();
    cin.putback('\n');
    cin.get();
}

int Throw(int n) {

    int value = 0;

    for (int i=0 ; i < n ; i++) {
        value += (rand()%6)+1;
    }

    return value;

}