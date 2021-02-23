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

  int valore, exp, passo, denominatore;;
  double pigreco = 0.0;

  exp = -1;
  denominatore = 1;

  printf( "%s\n", "Approssimazione di Pi Greco" );
  printf( "%s\n\n", "π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ..." );
  printf( "%s", "Quanti termini vuoi utilizzare ? " );
  scanf( "%d", &valore );

  for( passo = 0; passo < valore; passo++ ) {

      exp = -exp;
      if( exp == -1 ) {
          pigreco = pigreco - 4.0 / ( double )denominatore;
      }
      else {
          pigreco = pigreco + 4.0 / ( double )denominatore;
      }
      denominatore += 2;
  }

  printf( "PI : %f\n", pigreco );

  return 0;
}
