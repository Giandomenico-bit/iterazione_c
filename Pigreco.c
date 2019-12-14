/* PiGreco
Si scriva un programma C che calcoli il valore di π mediante la formula:

π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...

Il numero di termini della serie da utilizzare deve essere chiesto all'utente.

Esempio di output:

Approssimazione di Pi Greco
mediante la serie:

4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...

Quanti termini vuoi utilizzare? 5
PI: 3.339683

*/

#include <stdio.h>
#include <math.h>

int main( void ){

  int value;
  float pigreco = 0;
  int exp = -1;
  int i, j;

  printf( "Approssimazione di Pi Greco\n" );
  printf( "π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...\n\n" );
  printf( "Quanti termini vuoi utilizzare? " );
  scanf( "%d", &value );

  for( i = 0, j = 1; i < value; i++, j = j + 2 ){
    exp = -exp;

    if( exp == -1 ){
        pigreco = pigreco - 4.0/( float )j;
    } else pigreco = pigreco + 4.0/( float )j;
  }

  printf( "PI : %f\n", pigreco );

  return 0;
}
