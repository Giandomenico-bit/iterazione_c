/* Quadrato Vuoto

Si scriva un programma in C che prenda in input il lato di
un quadrato compreso tra 1 e 20 e poi disegni
solo il perimetro con un carattere a piacere. */

#include <stdio.h>

int main( void ){

  int ch;
  int side;
  int numRiga;
  int numColonna;

  printf( "Disegna quadrato con : " );
  scanf( "%lc", &ch );

  do{

    printf( "Inserisci il lato ( min 1, max 20 ) : " );
    scanf( "%d", &side );

  }while( side <= 0 || side > 20 );


  numRiga = 0;
  // Prima riga
  while( numRiga <  side ){
	  putchar( ch );
	  numRiga++;
  }
  putchar( '\n' );
  
  numRiga = 2;
  
  // righe intermedie
  while( numRiga < side ){
	  putchar( ch );
	  // Spazi
	  numColonna = 1;
	  while( numColonna < side - 1 ){
		  putchar( ' ' );
		  numColonna++;
	  }
	  numRiga++;
	  putchar( ch );
	  putchar( '\n' );
	  
  }
  
  // ultima riga
  numRiga = 0;
  while( numRiga <  side ){
	  putchar( ch );
	  numRiga++;
  }
  putchar( '\n' );
  
  return 0;
}
