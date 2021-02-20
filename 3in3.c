/* Di 3 in 3

Si scriva un programma in C che, dopo aver
chiesto all'utente di inserire un numero
intero, conti di 3 in 3 per cinque volte. */

#include <stdio.h>

int main( void ){

  int inizio;
  int incremento = 0;

  printf( "%s", "Numero di partenza : " );
  scanf( "%d", &inizio );

  while( incremento++ < 5 ) {
    inizio = inizio + 3;
    printf( "%d\n", inizio );
  }

  return 0;
}
