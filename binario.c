/* Binario

Si scriva un programma C che legga
in input un numero binario e ne
calcoli il corrispondente valore in decimale. */

#include <stdio.h>
#include <math.h>

int main( void ){

  unsigned int binario, decimale, temp;
  unsigned int res, resto;
  unsigned int esponente;
  unsigned flag = 0;

  do {

    printf( "%s", "Inserisci numero binario : " );
    scanf( "%u", &temp );

    binario = temp;

    for( ; temp != 0; temp /= 10 ) {
        resto = temp % 10;
        if( resto == 1 || resto == 0 )
            flag = 0;
        else {
            flag = 1;
            break;
        }
    }

  } while( flag == 1 );

  esponente = 0;
  res = 0;

  do {
    // calcolo binario mod 10
    resto = binario % 10;

    // trasformo il numero in binario
    decimale = pow( 2, esponente ) * resto;
    res = res + decimale;

    // avanzo di una posizione
    esponente = esponente + 1;
    binario = binario / 10;

  } while( binario != 0 );

  printf( "Risultato : %d\n", res );

  return 0;
}
