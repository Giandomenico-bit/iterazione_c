/* Massimo

Si scriva un programma in C che prenda
in input 10 numeri e determini il maggiore. */

#include <stdio.h>

int main( void ){

  int max;
  int number;
  size_t i;

  printf( "Inserisci numero : " );
  scanf( "%d", &number );
  max = number;

  i = 0;
  while( i < 9 ){

    printf( "Inserisci numero : " );
    scanf( "%d", &number );

    if( number > max ) max = number;

    i++;
  }

  printf( "Massimo : %d\n", max );

  return 0;
}
