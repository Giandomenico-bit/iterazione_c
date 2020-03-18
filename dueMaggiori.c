/* Due Maggiori
Si scriva un programma in C che prenda
in input 10 numeri e determini i due maggiori.

*/

#include <stdio.h>

int main( void ){

  int max, max2;
  int numero, numero2;
  int i;
  
  printf( "Inserisci primo numero : " );
  scanf( "%d", &numero );
  
  printf( "Inserisci primo numero : " );
  scanf( "%d", &numero2 );
  
  max2 = numero2;
  max = numero;

  if( max < max2 ){
      max2 = numero;
      max = numero2;
  }
  
  i = 0;
  while( i < 8 ){
	
     	printf( "Inserisci primo numero : " );
     	scanf( "%d", &numero );
  
	if( numero > max ){
            max2 = max;
	    max = numero;
	}
	else if( max == max2 ){
	    if( numero < max2) max2 = numero;
	}
	else if( numero > max2 ){
	    max2 = numero;
	}
	i = i + 1;
   } 
	
  printf( "max = %d\n", max );
  printf( "max2 = %d\n", max2 );
  
  return 0;
}
