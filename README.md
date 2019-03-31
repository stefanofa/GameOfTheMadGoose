# GameOfTheMadGoose
Gioco dell'oca pazza ~2018

Per generare il file eseguibile bisognerà spostarsi
all’interno della directory e digitare da terminale,
in ordine, i seguenti comandi :
```
cmake .
make
```
Verrà così generato il file eseguibile di nome
“GameOfTheMadGoose”.
Per farlo partire bisognerà, sempre da terminale,
digitare :
```
./GameOfTheMadGoose
```
### REGOLAMENTO :

In questa versione rivisitata del gioco dell'oca
il vincitore viene decretato tramite punteggio,
quindi lo scopo del gioco è di riuscire ad accumulare
almeno 1000 punti durante la partita.  
E’ presente però un’ulteriore modo tramite il quale
un giocatore può vincere la partita, cioè trovare ed
accumulare due carte speciali.  
Oltre al tabellone, infatti, si ha a disposizione un
mazzo di carte ed all’interno di questo mazzo
esistono esattamente 3 carte speciali di nome “**GOP**”.  
Se un giocatore durante la partita riesce a pescare 2
su 3 carte di questo tipo, vince automaticamente la
partita.  
Prima di iniziare la partita è necessario che i
giocatori inseriscano le seguenti informazioni :

- Numero di giocatori (minimo 2, massimo 10);
- Nickname di ogni giocatore;
- Dimensione del tabellone (minimo 50, massimo 100);
- Dimensione del mazzo (minimo 40, massimo 100);

Dopodiché il giocatore che ha inserito per primo il
nickname dovrà premere invio per iniziare la partita.
