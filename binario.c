/* Binario

Si scriva un programma C che legga
in input un numero binario e ne
calcoli il corrispondente valore in decimale. */

#include <stdio.h>
#include <math.h>

int main( void ){

  int value;
  int temp;
  int potenza, cifra;
  int decimale = 0;
  size_t ind;

  do{

    printf( "Inserisci numero binario : " );
    scanf( "%d", &value );
    temp = value;

    while( temp != 0 ){
    temp = value % 10;

    if( temp == 0 || temp == 1 ){
        ;
    } else break;
      temp = temp / 10;
    }

  }while( temp > 1 );

  temp = value;
  ind = 0;

  while( temp != 0 ){

    cifra = temp % 10;
    potenza = pow( 2, ind );
    potenza = potenza * cifra;
    decimale = decimale + potenza;

    ind++;
    temp = temp / 10;
  }

  printf( "%d( 2 ) = %d( 10 )\n", value, decimale );

  return 0;
}
