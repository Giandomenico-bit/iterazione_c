/* Cripta

Si scriva un programma C che accetti
un intero di quattro cifre. Sostituisca
ogni cifra con il risultato della somma
modulo dieci tra la cifra stessa e sette.
Infine scambi la prima cifra con la terza
e la seconda con la quarta.

Esempio di output:

Inserisci un numero di quattro cifre: 1278

Numero da crittografare: 1278
Numero crittografato: 4589

*/


#include <stdio.h>

int main( void ){

  int valore;
  int cifra1, cifra2, cifra3, cifra4;

  do{

    printf( "%s", "Inserisci valore di 4 cifre : " );
    scanf( "%d", &valore );

  }while( valore < 1000 || valore > 9999 );

  cifra4 = ( valore + 7 ) % 10;
  value = valore / 10;
  cifra3 = ( valore + 7 ) % 10;
  valore = valore / 10;
  cifra2 = ( valore + 7 ) % 10;
  valore = valore / 10;
  cifra1 = ( valore + 7 ) % 10;

  printf( "%d%d%d%d\n", cifra3, cifra4, cifra1, cifra2 );

  return 0;
}
