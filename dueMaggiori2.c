#include <stdio.h>
#include <limits.h>

int main( void ){

  int array[ 10 ];
  int i;
  int max = INT_MIN;
  int max2 = INT_MIN;

  printf( "Inserisci numero : " );
  scanf( "%d", &array[ 0 ] );

  printf( "Inserisci numero : " );
  scanf( "%d", &array[ 1 ] );

  if( array[ 0 ] > array[ 1 ] ){
    max = array[ 0 ];
    max2 = array[ 1 ];
  }
  else if( array[ 1 ] > array[ 0 ] ){
    max = array[ 1 ];
    max2 = array[ 0 ];
  }

  i = 2;
  while( i < 10 ){

    printf( "Inserisci numero : " );
    scanf( "%d", &array[ i ] );

    if( array[ i ] > max ){
      max = array[ i ];
    }
    i++;
  }

  i = 0;
  while( i < 10 ){

    if( array[ i ] > max2 && array[ i ] != max ) {
      max2 = array[ i ];
    }

    i++;
  }

  printf( "Massimo : %d\n", max );
  printf( "Secondo Massimo : %d\n", max2 );

  return 0;
}
