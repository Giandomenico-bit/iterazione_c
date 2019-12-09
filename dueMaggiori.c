/* Due Maggiori
Si scriva un programma in C che prenda
in input 10 numeri e determini i due maggiori.

FUNZIONANTE IN PARTE

*/

#include <stdio.h>

int main( void ){

  int max;
  int max2;
  int numero;
  int i;
  int temp;

  printf( "Inserisci numero : " );
  scanf( "%d", &numero );

  temp = numero;

  printf( "Inserisci numero : " );
  scanf( "%d", &numero );

  if( numero > temp ){
    max  = numero;
    max2 = temp;
  }
  else if( temp > numero ){
    max  = temp;
    max2 = numero;
  }
  else{
    max  = temp;
    max2 = temp;
  }

  i = 0;
  while( i < 8 ){

    printf( "Inserisci numero : " );
    scanf( "%d", &numero );

    if( numero > max ){
      max2 = max;
      max = numero;
    } else if ( numero < max && numero > max2 ) max2 = numero;

    i++;
  }

  printf( "Massimo  = %d\n", max );
  printf( "Secondo massimo = %d\n", max2 );

  return 0;
}
