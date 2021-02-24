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

int main( void ){

  int termini, segno, passo, denominatore;;
  double pigreco;

  printf( "%s", "Quanti termini vuoi utilizzare ? " );
  scanf( "%d", &termini );

  segno = -1;
  denominatore = 1;
  pigreco = 0.0;

  for( passo = 0; passo < termini; passo++ ) {
      segno = -segno;
      pigreco = pigreco + ( segno * ( 4.0 / ( double )denominatore ) );
      denominatore += 2;
  }

  printf( "PI : %f\n", pigreco );

  return 0;
}
