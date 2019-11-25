/* Binario

Si scriva un programma C che legga
in input un numero binario e ne
calcoli il corrispondente valore in decimale. */

#include <stdio.h>
#include <math.h>

int main( void ){

  int value;
  int temp;
  int cifraUltima;
  int sum = 0;
  int bit;
  int cifre, count = 0;

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

  }while( temp > 1 || value < 0 );

    temp = value;
    cifre = log10( value );
    while( count < cifre + 1 ){

        cifraUltima = temp % 10;
        bit = cifraUltima << count;
        sum = sum + bit; //somma dei bit

        temp = temp / 10; //decremento cifre
        count = count + 1;
    }

  printf( "%d( 2 ) = %d( 10 )\n", value, sum );

  return 0;
}
