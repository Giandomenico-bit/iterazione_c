/* Tabelline

Si scriva un programma in C che stampi la tabella pitagorica. */

#include <stdio.h>

int main( void ){

  unsigned int riga;
  unsigned int colonna;

  riga = 0;
  while( riga++ < 10 ) {
    colonna = 0;
    while( colonna++ < 10 )
        printf( "%-5u ", riga * colonna );
    putchar( '\n' );
  }

  return 0;
}
