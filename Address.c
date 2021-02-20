/* Address

Si scriva un programma C che stampi il valore
dell'indirizzo di tutti gli elementi di un vettore di dieci interi.

*/

#include <stdio.h>

int main( void ) {

  int array[ 10 ];

  for( int c = 0; c < 10; c++ )
      printf( "%p\n", &array[ c ] );

  return 0;
}
