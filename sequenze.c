/* Sequenze
Si scriva un programma C che, utilizzando cicli for, generi le sequenze:

1, 2, 3, 4, 5, 6, 7, 8
3, 8, 13, 18, 23
20, 14, 8, 2, -4, -10
19, 27, 35, 43, 51

*/

#include <stdio.h>

int main( void ){

  int c;

  for( c = 1; c <= 8; c++ )
    printf( "%-5d ", c );

  putchar( '\n' );

  for( c = 3; c <= 23; c += 5 )
    printf( "%-5d ", c );

  putchar( '\n' );

  for( c = 20; c >= -10; c -= 6 )
    printf( "%-5d ", c );

  putchar( '\n' );

  for( c = 19; c <= 51; c += 8 )
    printf( "%-5d ", c );

  putchar( '\n' );

  return 0;
}
