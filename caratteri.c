/*
Caratteri

Si scriva un programma C che, data una stringa
(non in input), ne stampi i caratteri uno per riga.

*/

#include <stdio.h>

int main( void ){

  char* str = "hello world!";

  for( int c = 0; str[ c ] != '\0'; c++ ){
    putchar( str[ c ] );
    putchar( '\n' );
  }

  return 0;
}
