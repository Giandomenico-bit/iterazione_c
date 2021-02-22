/* Massimo

Si scriva un programma in C che prenda
in input 10 numeri e determini il maggiore. */

#include <stdio.h>

int main( void ){

  int max, numero, passo;

  printf( "%s", "Inserisci numero : " );
  scanf( "%d", &numero );

  max = numero;

  passo = 0;
  while( passo < 10 ) {

    printf( "%s", "Inserisci numero : " );
    scanf( "%d", &numero );

    if( numero > max )
        max = numero;

    passo++;
  }

  printf( "Massimo : %d\n", max );

  return 0;
}
