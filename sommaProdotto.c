#include <stdio.h>

int main( void ){

  int i;
  int sommaPari, prodottoDispari;

  for( i = 0; i <= 30; i = i + 2 )
    sommaPari = sommaPari + i;
  for( i = 1; i <= 15; i = i + 3 )
    prodottoDispari = prodottoDispari + i;

  printf( "Somma : %d\n", sommaPari );
  printf( "Prodotto : %d\n", prodottoDispari );

  return 0;
}
