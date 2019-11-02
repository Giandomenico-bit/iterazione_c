/* Quadrato Vuoto

Si scriva un programma in C che prenda in input il lato di
un quadrato compreso tra 1 e 20 e poi disegni
solo il perimetro con un carattere a piacere. */

#include <stdio.h>

int main( void ){

  char ch;
  int side;
  int numRiga = 0;
  int numColonna;

  printf( "Disegna quadrato con : " );
  scanf( "%c", &ch );

  do{

    printf( "Inserisci il lato ( min 1, max 20 ) : " );
    scanf( "%d", &side );

  }while( side <= 0 || side > 20 );

while (numRiga < side ) {

  printf("*");
  numColonna = 1;

  while (numColonna < (side - 1)) {

    if (numRiga == 0 || numRiga == (side - 1)) {
      printf("*");
    }
    else {
      printf(" ");
    }
    numColonna++;
  }

  printf("*\n");
  numRiga++;
}

  return 0;
}
