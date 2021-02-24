/* Si scriva un programma C
che calcoli la somma degli interi pari compresi
tra 2 e 30 e il prodotto degli interi
dispari compresi tra 1 e 15. */

#include <stdio.h>

int main( void ){

  int passo, sommaPari, prodottoDispari;

  sommaPari = 0;
  prodottoDispari = 1;

  for( passo = 0; passo < 31; passo = passo + 2 ) {
       sommaPari = sommaPari + passo;
  }

  for( passo = 1; passo < 16; passo = passo + 2 ) {
       prodottoDispari = prodottoDispari * passo;
  }

  printf( "Somma : %d\n", sommaPari );
  printf( "Prodotto : %d\n", prodottoDispari );

  return 0;
}
