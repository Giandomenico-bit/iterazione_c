/* Binario

Si scriva un programma C che legga
in input un numero binario e ne
calcoli il corrispondente valore in decimale. */

#include <stdio.h>
#include <math.h>

int main( void ){

  int value;
  int valueTemp, ultimaCifra;
  int sum;
  int bit, exp;

  do{

    printf( "Inserisci numero binario : " );
    scanf( "%d", &value );

    valueTemp = value;
    while( valueTemp != 0 ){

    ultimaCifra = value % 10;
    if( ultimaCifra != 0 && ultimaCifra != 1 ) break;
        valueTemp = valueTemp / 10;
    }

  sum = 0;
  exp = 0;
  
  }while( valueTemp > 1 || value < 0 );

    valueTemp = value;
    while( valueTemp != 0 ){

        ultimaCifra = valueTemp % 10;
        bit = ultimaCifra << exp;
        sum = sum + bit; //somma dei bit

        valueTemp = valueTemp / 10; //decremento cifre
        exp = exp + 1;
    }

  printf( "%d( 2 ) = %d( 10 )\n", value, sum );

  return 0;
}
