/* SumVett

Si scriva una programma C che, dopo aver chiesto all'utente
dieci numeri interi, li memorizzi all'interno di
un vettore, li sommi, ne calcoli la media
e infine stampi tutti i dati e i risultati.

*/

#include <stdio.h>

int main( void ){

  int array[ 10 ], somma, i;
  float media;

  somma = 0;

  printf( "%s\n", "Inserisci 10 valori interi : " );

  for( i = 0; i < 10; i++ ) {
      printf( "%s", "? " );
      scanf( "%d", &array[ i ] );
      somma = somma + array[ i ];
  }

  printf( "\n%s\n", "Dati iniziali :" );

  for( i = 0; i < 10; i++ )
      printf( "array[ %d ] = %d\n", i, array[ i ] );

  putchar( '\n' );

  media = ( float )somma / 10.0;

  printf( "Somma : %d\n", somma );
  printf( "Media : %.2f\n", media );

  return 0;
}
