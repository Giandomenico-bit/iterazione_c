/* Address

Si scriva un programma C che stampi il valore
dell'indirizzo di tutti gli elementi di un vettore di dieci interi.

*/

#include <stdio.h>

int main( void ){

  int array[ 10 ];

  for( int i = 0; i < 10; i++ ){
    array[ i ] = 2 * i;
    printf( "array[ %d ] = %p\n", i, &array[ i ] );
  }


  return 0;
}
