#include <stdio.h>

int main( void ){

  int i;
  int sommaPari;
  int prodottoDispari = 1;

  sommaPari = ( 30 * ( 30 + 2 ) ) / 4;

  for( i = 1; i <= 15; i = i + 3 )
       prodottoDispari = prodottoDispari * i;

  printf( "Somma : %d\n", sommaPari );
  printf( "Prodotto : %d\n", prodottoDispari );

  return 0;
}
