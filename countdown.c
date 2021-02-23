/* Countdown

Si scriva un programma in C che, dopo aver
chiesto all'utente di inserire un
numero intero, esegua il conto alla rovescia. */

#include <stdio.h>

int main( void ){

  int inizio;

  printf( "Da che numero devo partire : " );
  scanf( "%d", &inizio );

  while( inizio > 0 ) {
    printf( "%d\n", inizio );
    inizio--;
  }
  printf( "%s\n", "Lanciato!" );

  return 0;
}
