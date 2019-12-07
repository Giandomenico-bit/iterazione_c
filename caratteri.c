/*
Caratteri

Si scriva un programma C che, data una stringa
(non in input), ne stampi i caratteri uno per riga.

*/

#include <stdio.h>

int main( void ){

  char* str = "hello world!";

  for( int i = 0; str[ i ] != '\0'; i++ ){
    putchar( str[ i ] );
    puts( "" );
  }

  return 0;
}
