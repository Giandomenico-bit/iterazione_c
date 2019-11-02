/* Due Maggiori

Si scriva un programma in C che prenda
in input 10 numeri e determini i due maggiori. */

#include <stdio.h>
#include <limits.h>

#define SIZE 10

int main( void ){

  int number;
  int max, max2;
  size_t i;
  int temp;

  printf( "Inserisci numero : " );
  scanf( "%d", &number );

  max  = number;
  max2 = INT_MIN;
  temp = number;

  i = 0;
  while( i < 9 ){
  printf( "Inserisci numero : " );
  scanf( "%d", &number );

    if( number > max ){
      max = number;
    }
    if( temp < max && temp > max2 ){
      max2 = temp;
    }
    temp = number;

    i = i + 1;
  }

  printf( "Massimo : %d\n", max );
  printf( "Secondo massimo : %d\n", max2 );

  return 0;
}
