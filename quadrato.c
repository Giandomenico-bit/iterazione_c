/* Quadrato

Si scriva un programma in C che prenda in input
il lato di un quadrato compreso tra 1 e 20
e poi lo disegni con un carattere a piacere. */

#include <stdio.h>

int main( void ){

  char ch;
  int side;

  printf( "Disegna un quadrato con : " );
  scanf( "%c", &ch );

  do {

    printf( "Inserisci il lato ( min 1, max 20 ) : " );
    scanf( "%d", &side );

  }while( side <= 0 || side > 20 );

  for( size_t i = 1; i <= side; i++ ){
    for( size_t j = 1; j <= side; j++ ){
      printf( "%c", ch );
    }
    puts( "" );
  }


  return 0;
}
