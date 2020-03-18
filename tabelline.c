/* Tabelline

Si scriva un programma in C che stampi la tabella pitagorica. */

#include <stdio.h>

int main( void ){

  size_t i;
  size_t j;

  i = 1;
  while( i <= 10 ){
    j = 1;
    while( j <= 10 ){
      printf( "%-2ld ", i * j );
      j++;
    }
    puts( "" );
    i++;
  }

  return 0;
}
