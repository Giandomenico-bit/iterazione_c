/* Si scriva un programma C che accetti un
intero di quattro cifre crittografato con
il metodo dell'esercizio precedente e
restituisca il numero originale.

Esempio di output:

Inserisci un numero di quattro cifre: 4589

Numero da decrittografare: 4589
Numero originale: 1278
*/

#include <stdio.h>

int main( void ){

  int valore, cifra1, cifra2, cifra3, cifra4;

  do {

    printf( "Inserisci valore di 4 cifre : " );
    scanf( "%d", &valore );

  } while( valore < 1000 || valore > 9999 );

  cifra4 = ( valore + 3 ) % 10;
  valore = valore / 10;
  cifra3 = ( valore + 3 ) % 10;
  valore = valore / 10;
  cifra2 = ( valore + 3 ) % 10;
  valore = valore / 10;
  cifra1 = ( valore + 3 ) % 10;
  valore = valore / 10;

  printf( "%d%d%d%d\n", cifra3, cifra4, cifra1, cifra2 );

  return 0;
}
