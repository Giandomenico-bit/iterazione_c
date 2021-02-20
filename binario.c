/* Binario

Si scriva un programma C che legga
in input un numero binario e ne
calcoli il corrispondente valore in decimale. */

#include <stdio.h>
#include <math.h>

int main( void ){

  unsigned int binario, decimale, esponente;
  unsigned int res = 0;
  unsigned int esponente = 0;

  printf( "%s", "Inserisci numero binario : " );
  scanf( "%u", &binario );

  do {

    resto = binario % 10;

    decimale = pow( 2, esponente ) * resto;
    res = res + decimale;

    esponente = esponente + 1;
    binario = binario / 10;

  } while( binario != 0 );

  printf( "Risultato : %d\n", res );

  return 0;
}
