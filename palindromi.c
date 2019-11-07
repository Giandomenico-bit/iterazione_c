/* Palindromi

Si scriva un programma C che legga in input
un intero positivo di cinque cifre e determini se è palindromo. */

#include <stdio.h>

int main( void ){

  int value;
  int cifra1, cifra2, cifra3, cifra4;

  do{
    printf( "Inserisci numero : " );
    scanf( "%d", &value );

  }while( value < 10000 || value > 99999 );

  cifra1 = value % 10;
  value = value / 10;

  cifra2 = value % 10;
  value = value / 10;

  value = value / 10;

  cifra3 = value % 10;
  value = value / 10;

  cifra4 = value % 10;
  value = value / 10;

  if( cifra1 == cifra4 && cifra3 == cifra2 ) printf( "Numero palindromo\n" );
  else printf( "Numero non palindromo\n" );

  return 0;
}
