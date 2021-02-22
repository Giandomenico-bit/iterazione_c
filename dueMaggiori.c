/* Due Maggiori
Si scriva un programma in C che prenda
in input 10 numeri e determini i due maggiori.

*/

#include <stdio.h>

int main( void ){

  int max1, max2, numero, i;

  printf( "%s", "Inserisci numero : " );
  scanf( "%d", &numero );

  max1 = numero;

  printf( "%s", "Inserisci numero : " );
  scanf( "%d", &numero );

  max2 = numero;

  if( max2 > max1 ) {
	    max2 = max1;
	    max1 = numero;
  }

  i = 0;
  while( i < 8 ) {

    printf( "%s", "Inserisci numero : " );
    scanf( "%d", &numero );

	  if( numero > max1 ) {
        max2 = max1;
	      max1 = numero;
    }
	  else if( numero > max2 )
        max2 = numero;
	  i = i + 1;
  }

  printf( "\nmax1 = %d\n", max1 );
  printf( "max2 = %d\n", max2 );

  return 0;
}
