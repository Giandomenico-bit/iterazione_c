/* Tabelline

Si scriva un programma in C che stampi la tabella pitagorica. */

#include <stdio.h>

int main( void ){

  unsigned int riga, colonna;

  riga = 1;
  while( riga < 11 ) {
    colonna = 1;
    while( colonna < 11 ) {
        printf( "%-5u ", riga * colonna );
        colonna++;
    }
    riga++;
    putchar( '\n' );
  }

  return 0;
}
