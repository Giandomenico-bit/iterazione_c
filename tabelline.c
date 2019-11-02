/* Tabelline

Si scriva un programma in C che stampi la tabella pitagorica. */

#include <stdio.h>

int main( void ){

  size_t i;
  size_t j;

  for( i = 1; i <= 10; i++ ){
    for( j = 1; j<= 10; j++ ){
      printf( "%-2ld ", i * j );
    }
    puts( "" );
  }

  return 0;
}
