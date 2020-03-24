/* Due Maggiori
Si scriva un programma in C che prenda
in input 10 numeri e determini i due maggiori.

*/

#include <stdio.h>

int main( void ){

  int max, max2;
  int numero;
  int i;
  
  printf( "Inserisci primo numero : " );
  scanf( "%d", &numero );
  
  max = numero;
  
  printf( "Inserisci primo numero : " );
  scanf( "%d", &numero );
  
  max2 = numero;
  
  if( max2 > max ){
	  max2 = max;
	  max = numero;
  }
	  
  
  i = 0;
  while( i < 8 ){
	  
    	printf( "Inserisci primo numero : " );
     	scanf( "%d", &numero );
  
	if( numero > max ){
         max2 = max;
	     max = numero;
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
