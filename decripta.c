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

  int value;
  int cifra1, cifra2, cifra3, cifra4;
  int temp;

  do{

    printf( "Inserisci valore di 4 cifre : " );
    scanf( "%d", &value );

  }while( value < 1000 || value > 9999 );

  cifra4 = (( value % 10 ) + 3 ) % 10;
  value = value / 10;
  cifra3 = (( value % 10 ) + 3 ) % 10;
  value = value / 10;
  cifra2 = (( value % 10 ) + 3 ) % 10;
  value = value / 10;
  cifra1 = (( value % 10 ) + 3 ) % 10;
  value = value / 10;

  printf( "%d%d%d%d\n", cifra3, cifra4, cifra1, cifra2 );

  return 0;
}
