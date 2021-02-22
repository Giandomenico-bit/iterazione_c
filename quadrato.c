/* Quadrato

Si scriva un programma in C che prenda in input
il lato di un quadrato compreso tra 1 e 20
e poi lo disegni con un carattere a piacere. */

#include <stdio.h>

int main( void ){

  char ch;
  int lato, riga, colonna;

  printf( "Disegna un quadrato con : " );
  scanf( "%c", &ch );

  do {
    printf( "Inserisci il lato ( min 1, max 20 ) : " );
    scanf( "%d", &lato );

  } while( lato <= 0 || lato > 20 );

  riga = 1;
  while( riga++ <= lato ) {
    colonna = 1;
    while( colonna++ <= lato )
        putchar( ch );
    putchar( '\n' );
  }
  
  return 0;
}
