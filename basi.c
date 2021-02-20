/* Basi

Si scriva un programma C che stampi una tabella
con i numeri da 0 a 255 in decimale,
in binario, in ottale e in esadecimale.

Esempio di output:

  N        Bin   Oct   Hex
  0   00000000   000    00
  1   00000001   001    01
  2   00000010   002    02
  3   00000011   003    03
  ...
255   11111111   377    FF

*/

#include <stdio.h>

int main( void ){

  int passi = 0;
  unsigned int maschera;

  while( passi < 256 ) {
      printf( "%d\t", passi );

      maschera = 1 << 7; // 10000000
      for( int c = 0; c < 8; c++ ) {
	  putchar( passi & maschera ? '1' : '0' );
	  maschera >>= 1;
      }

    printf( "\t%o\t", passi );
    printf( "%X\n", passi );

    passi++;
  }

  return 0;
}
