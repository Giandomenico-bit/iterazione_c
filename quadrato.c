/* Quadrato

Si scriva un programma in C che prenda in input
il lato di un quadrato compreso tra 1 e 20
e poi lo disegni con un carattere a piacere. */

#include <stdio.h>

int main( void ){

  int ch;
  int side;
  size_t i, j;

  printf( "Disegna un quadrato con : " );
  scanf( "%lc", &ch );

  do {

    printf( "Inserisci il lato ( min 1, max 20 ) : " );
    scanf( "%d", &side );

  }while( side <= 0 || side > 20 );

  i = 1;
  while( i <= side ){
    j = 1;
    while( j <= side ){
      printf( "%c", ch );
      j++;
    }
    puts( "" );
    i++;
  }
  return 0;
}
