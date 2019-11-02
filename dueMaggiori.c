/* Due Maggiori

Si scriva un programma in C che prenda
in input 10 numeri e determini i due maggiori. */

#include <stdio.h>

int main( void ){

  int number;
  int temp;
  int max, max2;
  size_t i;

  printf( "Inserisci numero : " );
  scanf( "%d", &number );

  max  = number;
  max2 = number;
  temp = number;

  for( i = 0; i < 9; i++ ){

    printf( "Inserisci numero : " );
    scanf( "%d", &number );

    if( number > max ) max = number;
    if( temp  >= max2 && temp < max ){
      max2 = temp;
      temp = number;
    }
  }

  printf( "Massimo : %d\n", max );
  printf( "Secondo massimo : %d\n", max2 );


  return 0;
}
