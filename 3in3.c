/* Di 3 in 3

Si scriva un programma in C che, dopo aver
chiesto all'utente di inserire un numero
intero, conti di 3 in 3 per cinque volte. */

#include <stdio.h>

int main( void ){

  int startNumber;
  size_t i;

  printf( "Numero di partenza : " );
  scanf( "%d", &startNumber );

  i = startNumber;

  while( i <= 18 ){
    printf( "%ld\n", i );

    i += 3;
  }

  return 0;
}
