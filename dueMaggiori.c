/* Due Maggiori
Si scriva un programma in C che prenda
in input 10 numeri e determini i due maggiori. */

#include <stdio.h>
#include <limits.h>

int main( void ){

  int max;
  int max2;
  int numero;
  int numero2;
  int i;

  printf( "Inserisci numero : " );
  scanf( "%d", &numero );

  printf( "Inserisci numero : " );
  scanf( "%d", &numero2 );

  if( numero > numero2 ){
    max  = numero;
    max2 = numero2;
  }
  else if( numero2 > numero ){
    max  = numero2;
    max2 = numero;
  }
  else{
    max  = numero;
    max2 = numero;
  }

  int temp = numero2;

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
