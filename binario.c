/* Binario

Si scriva un programma C che legga
in input un numero binario e ne
calcoli il corrispondente valore in decimale. */

#include <stdio.h>
#include <math.h>

int main( void ) {

  unsigned int binario, decimale, temp, somma, resto, esponente;
  unsigned flag = 0;

  do {

    printf( "%s", "Inserisci numero binario : " );
    scanf( "%u", &temp );

    binario = temp;

    while( temp != 0 ) {
        resto = temp % 10;
        if( resto == 1 || resto == 0 )
            flag = 0;
        else {
            flag = 1;
            break;
        }
        temp /= 10;
    }

  } while( flag == 1 );

  esponente = 0;
  somma = 0;

  do {
    // calcolo rest( binario, 10 )
    resto = binario % 10;

    // trasformo il numero in binario
    decimale = pow( 2, esponente ) * resto;
    somma = somma + decimale;

    // avanzo di una posizione
    esponente++;
    binario = binario / 10;

  } while( binario != 0 );

  printf( "Risultato : %d\n", somma );

  return 0;
}
