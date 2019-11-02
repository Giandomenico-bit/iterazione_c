/* Massimo

Si scriva un programma in C che prenda
in input 10 numeri e determini il maggiore. */

#include <stdio.h>

int main( void ){

  int max;
  int number;

  printf( "Inserisci numero : " );
  scanf( "%d", &number );
  max = number;

  for( size_t i = 0; i < 9; i++ ){

    printf( "Inserisci numero : " );
    scanf( "%d", &number );

    if( number > max ) max = number;
  }

  printf( "Massimo : %d\n", max );

  return 0;
}
