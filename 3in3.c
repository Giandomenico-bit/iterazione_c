/* Di 3 in 3

Si scriva un programma in C che, dopo aver
chiesto all'utente di inserire un numero
intero, conti di 3 in 3 per cinque volte. */

#include <stdio.h>

int main( void ){

  int startNumber;
  int count = 0;

  printf( "Numero di partenza : " );
  scanf( "%d", &startNumber );

  while( count < 5 ){

    printf( "%d\n", startNumber );

    startNumber = startNumber + 3;
    count = count + 1;
  }

  return 0;
}
