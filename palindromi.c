/* Palindromi

Si scriva un programma C che legga in input
un intero positivo di cinque cifre e determini se è palindromo. */

#include <stdio.h>
#include <math.h>

int main( void ){

  int value;
  int reverse = 0;
  int numCifre;
  int cifra, potenza, temp;

  printf( "Inserisci numero : " );
  scanf( "%d", &value );

  numCifre = log10( value );
  temp = value;
  // calcolo inverso di un numero
  while( temp != 0 ){

    cifra = temp % 10;

    potenza = pow( 10, numCifre );
    potenza = potenza * cifra;
    reverse = reverse + potenza;

    temp = temp / 10;
    numCifre = numCifre - 1;
  }

  if( value == reverse ) printf( "Numero palindromo\n" );
  else printf( "Numero non palindromo\n" );

  return 0;
}
