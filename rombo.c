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

  int riga, value;
  int i, j, k;

  do {
    printf( "%s", "Numero righe ( dispari 1-19 ) : " );
    scanf( "%d", &riga );

    value = riga % 2;

  } while( value == 0 || riga < 1 || riga > 19 );

  for( i = 1; i <= riga; i = i + 2 ) {
    for( k = riga; k > i; k = k - 2 )
        putchar( ' ' );
    for( j = 1; j <= i; j++ )
        putchar( '*' );
    putchar( '\n' );
  }

  riga = riga - 2;

  for( i = riga; i >= 1; i = i - 2 ) {
    for( k = riga; k >= i; k = k - 2 )
        putchar( ' ' );
    for( j = 1; j <= i; j++ )
        putchar( '*' );
    putchar( '\n' );
  }

  return 0;
}
