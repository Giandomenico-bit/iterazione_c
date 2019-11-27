/* Rombo
Si scriva un programma C che, preso in input un
intero dispari compreso tra 1 e 19, disegni un
rombo come quello mostrato utilizzando solo
chiamate a putchar().

Esempio di esecuzione:

Rombo

Numero di righe (dispari 1-19): 7

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main( void ){

  int row;
  int value;
  int i, j, k;

  do{

    printf( "Numero righe ( dispari 1-19 ) : " );
    scanf( "%d", &row );
    value = row % 2;

  }while( value == 0 || row < 1 || row > 19 );

  for( i = 1; i <= row; i = i + 2 ){
    for( k = row; k > i; k = k - 2 ){
      putchar( ' ' );
    }
    for( j = 1; j <= i; j++ ){
      putchar( '*' );
    }
    puts( "" );
  }

  row = row - 2;

  for( i = row; i >= 1; i = i - 2 ){
    for( k = row; k >= i; k = k - 2 ){
      putchar( ' ' );
    }
    for( j = 1; j <= i; j++ ){
      putchar( '*' );
    }
    puts( "" );
  }

  return 0;
}
