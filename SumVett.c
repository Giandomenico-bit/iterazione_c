/* SumVett

Si scriva una programma C che, dopo aver chiesto all'utente
dieci numeri interi, li memorizzi all'interno di
un vettore, li sommi, ne calcoli la media
e infine stampi tutti i dati e i risultati.

*/

#include <stdio.h>

int main( void ){

  int array[ 10 ];
  int media, somma = 0;
  int i;

  puts( "Inserisci 10 valori interi :" );
  puts( "" );
  for( i = 0; i < 10; i++ ){
    printf( "? " );
    scanf( "%d", &array[ i ] );
    somma = somma + array[ i ];
  }

  puts( "Dati iniziali :" );
  puts( "" );
  for( i = 0; i < 10; i++ ){
    printf( "array[ %d ] = %d\n", i, array[ i ] );
  }

  puts( "" );

  media = somma / 10;

  printf( "Somma : %d\n", somma );
  printf( "Media : %d\n", media );

  return 0;
}
