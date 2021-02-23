/* Binario

Si scriva un programma C che legga
in input un numero binario e ne
calcoli il corrispondente valore in decimale. */

#include <stdio.h>

int main( void ) {

  unsigned int binario, decimale, temp, somma, resto, potenza;
  unsigned flag = 0;

  do {

    printf( "%s", "Inserisci numero binario : " );
    scanf( "%u", &temp );

    binario = temp;
    flag = 0;

    while( temp != 0 ) {
        resto = temp % 10;
        if( resto != 1 && resto != 0 ) {
            flag = 1;
            break;
        }
        temp /= 10;
    }

  } while( flag == 1 );

  somma = 0;
  potenza = 1;

  do {
    // calcolo rest( binario, 10 )
    resto = binario % 10;

    // trasformo il numero in binario
    decimale = potenza * resto;
    somma = somma + decimale;

    potenza = potenza * 2;
    binario = binario / 10;

  } while( binario != 0 );

  printf( "Risultato : %d\n", somma );

  return 0;
}
