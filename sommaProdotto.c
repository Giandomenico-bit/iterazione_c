/* Si scriva un programma C
che calcoli la somma degli interi pari compresi
tra 2 e 30 e il prodotto degli interi
dispari compresi tra 1 e 15. */

#include <stdio.h>

int main( void ){

  int i, sommaPari, prodottoDispari = 1;

  sommaPari = ( 30 * ( 30 + 2 ) ) / 4;

  for( i = 1; i <= 15; i = i + 3 )
       prodottoDispari = prodottoDispari * i;

  printf( "Somma : %d\n", sommaPari );
  printf( "Prodotto : %d\n", prodottoDispari );

  return 0;
}
