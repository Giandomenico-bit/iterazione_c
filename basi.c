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

  int value = 0;
  int incremento;
  char vect[ 16 ] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
  int quoziente, resto;
  
  
  while( value < 256 ){
	  incremento = 128;
	  for( int c = 1; c <= 8; c++ ){
		   printf( value & incremento ? "1" : "0" );
	       incremento = incremento >> 1;
	  }
	  puts( "" );
	  value = value + 1;
  }
  
  puts( "" );
 
	for( int i = 0; i <= 3; i++ ){
		for( int j = 0; j <= 7; j++ ){
			for( int k = 0; k <= 7; k++ ){
				printf( "%d%d%d\n", i, j, k );
			}
		}
	}
	
	puts( "" );
	
	value = 0;
	while( value < 256 ){
		
		quoziente = value / 16;
		resto = value % 16;
		
		printf( "%c%c\n", vect[ quoziente ], vect[ resto ] );
		value = value + 1;
	}
	
  return 0;
}
