/* Palindromi

Si scriva un programma C che legga in input
un intero positivo di cinque cifre e determini se è palindromo. */

#include <stdio.h>

int main( void ){

  unsigned int numero, cifra1, cifra2, cifra3, cifra4;

  do {
    printf( "%s", "Inserisci numero : " );
    scanf( "%u", &numero );

  } while( numero < 10000 || numero > 99999 );

  cifra1 = numero % 10;
  numero = numero / 10;

  cifra2 = numero % 10;
  numero = numero / 10;

  numero = numero / 10;

  cifra3 = numero % 10;
  numero = numero / 10;

  cifra4 = numero % 10;
  numero = numero / 10;

  if( cifra1 == cifra4 && cifra3 == cifra2 ) {
    printf( "Numero palindromo\n" );
  }
  else {
    printf( "Numero non palindromo\n" );
  }

  return 0;
}
