/* Palindromi

Si scriva un programma C che legga in input
un intero positivo di cinque cifre e determini se è palindromo. */

#include <stdio.h>
#include <math.h>

int main( void ){

  int value;
  int reverse = 0;
  int log;
  int cifra, potenza, temp;

  printf( "Inserisci numero : " );
  scanf( "%d", &value );

  log = log10( value );
  temp = value;
  // calcolo inverso di un numero
  while( temp != 0 ){

    cifra = temp % 10;

    potenza = pow( 10, log );
    potenza = potenza * cifra;
    reverse = reverse + potenza;

    temp = temp / 10;
    log--;
  }

  if( value == reverse ) printf( "Numero palindromo\n" );
  else printf( "Numero non palindromo\n" );

  return 0;
}
