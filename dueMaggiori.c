/* Due Maggiori
Si scriva un programma in C che prenda
in input 10 numeri e determini i due maggiori. */

#include <stdio.h>
#include <limits.h>

#define SIZE 10

int main( void ){

  int number;
  int max  = INT_MIN;
  int max2 = INT_MIN;
  int temp;
  size_t i, j;
  int array[ SIZE ];

  i = 0;
  while( i < 10 ){
  printf( "Inserisci numero : " ); //caricamento elementi nell'array
  scanf( "%d", &number );
  array[ i ] = number;
  i = i + 1;
  }

  i = 0;
  while( i < SIZE - 1 ){
    j = i + 1;
    while( j < SIZE ){
      if( array[ i ] < array[ j ] ){
        temp = array[ i ];
        array[ i ] = array[ j ]; //ordinamento
        array[ j ] = temp;
      }
      j = j + 1;
    }
    i = i + 1;
  }

  i = 1;
  max = array[ 0 ];
  while( i < 10 ){
    if( array[ i ] < max && array[ i ] > max2 ){
      max2 = array[ i ];
    }
    i = i + 1;
  }

  printf( "Massimo : %d\n", max );
  printf( "Secondo massimo : %d\n", max2 );

  return 0;
}
