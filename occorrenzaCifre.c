/* Occorrenze cifra

Si scriva un programma C che legga in input un
intero positivo e dica quanti 7
sono presenti tra le cifre che lo compongono. */

#include <stdio.h>

int main( void ){

  int valore;
  int cifra;
  int count = 0;

  printf( "%s", "Inserisci numero : " );
  scanf( "%d", &valore );

  while( valore != 0 ) {

    cifra = valore % 10;
    if( cifra == 7 ) count = count + 1;
    valore = valore / 10;
  }

  printf( "Cifre contate : %d\n", count );

  return 0;
}
