/* Countdown

Si scriva un programma in C che, dopo aver
chiesto all'utente di inserire un
numero intero, esegua il conto alla rovescia. */

#include <stdio.h>

int main( void ){

  int number;

  printf( "Da che numero devo partire : " );
  scanf( "%d", &number );

  for( size_t i = number; i > 0; i-- ){
    printf( "%ld\n", i );
  }
  printf( "%s\n", "Lanciato!" );

  return 0;
}
