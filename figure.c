/*
Figure
Utilizzando solo la funzione putchar(), si scriva un programma che stampi le seguenti figure.

*
**
***
****
*****
******
*******
********
*********
**********

**********
*********
********
*******
******
*****
****
***
**
*

**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *

         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
*/

#include <stdio.h>

int main( void ){

  int i, j, k;

  for( i = 1; i <= 10; i++ ){    // prima figura
    for( j = 1; j <= i; j++ ){
        putchar( '*' );
    }
    puts( "" );
  }

  puts( "" );

  for( i = 10; i >= 1; i-- ){   // seconda figura
    for( j = 1; j <= i; j++ ){
        putchar( '*' );
    }
    puts( "" );
  }

  puts( "" );

  for( i = 10; i >= 1; i-- ){   // terza figura
    for( j = 1; j <= i; j++ ){
        putchar( '*' );
    }
    puts( "" );
    for( k = 10; k >= i; k-- ){
      printf( " " );
    }
  }

  puts( "" );

  for( i = 1; i <= 10; i++ ){   // quarta figura
    for( k = 9; k >= i; k-- ){
      printf( " " );
    }
    for( j = 1; j <= i; j++ ){
        putchar( '*' );
    }
    puts( "" );
  }

  return 0;
}
