/* Occorrenze cifra

Si scriva un programma C che legga in input un
intero positivo e dica quanti 7
sono presenti tra le cifre che lo compongono. */

#include <stdio.h>

int main( void ){

  int value;
  int cifra;
  int count = 0;

  printf( "Inserisci numero : " );
  scanf( "%d", &value );

  while( value != 0 ){

    cifra = value % 10;
    if( cifra == 7 ) count = count + 1;

    value = value / 10;
  }

  printf( "Cifre contate : %d\n", count );

  return 0;
}
