/* Sequenze
Si scriva un programma C che, utilizzando cicli for, generi le sequenze:

1, 2, 3, 4, 5, 6, 7, 8
3, 8, 13, 18, 23
20, 14, 8, 2, -4, -10
19, 27, 35, 43, 51

*/

#include <stdio.h>

int main( void ){

  int i;

  for( i = 1; i <= 8; i++ )
    printf( "%d ",i );

  puts( "" );

  for( i = 3; i <= 24; i = i + 5 )
    printf( "%d ",i );

  puts( "" );

  for( i = 20; i >= -10; i = i - 6 )
    printf( "%d ",i );

  puts( "" );

  for( i = 19; i <= 51; i = i + 8 )
    printf( "%d ",i );

  puts( "" );

  return 0;
}
