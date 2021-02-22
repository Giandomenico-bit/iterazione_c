/* Quadrato Vuoto

Si scriva un programma in C che prenda in input il lato di
un quadrato compreso tra 1 e 20 e poi disegni
solo il perimetro con un carattere a piacere. */

#include <stdio.h>

int main( void ){

  char ch;
  int lato, numRiga, numColonna;

  printf( "Disegna quadrato con : " );
  scanf( "%c", &ch );

  do {
    printf( "Inserisci il lato ( min 1, max 20 ) : " );
    scanf( "%d", &lato );

  } while( lato <= 0 || lato > 20 );


  numRiga = 0;
  // Prima riga
  while( numRiga++ < lato )
	   putchar( ch );
  putchar( '\n' );

  numRiga = 2;

  // righe intermedie
  while( numRiga++ < lato ) {
	  putchar( ch );
	  // Spazi
	  numColonna = 1;
	  while( numColonna++ < lato - 1 )
		    putchar( ' ' );
	  putchar( ch );
	  putchar( '\n' );
  }

  // ultima riga
  numRiga = 0;
  while( numRiga++ <  lato )
	     putchar( ch );
  putchar( '\n' );

  return 0;
}
