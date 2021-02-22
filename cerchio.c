/* Si riscriva il programma cerchio.c
(parte 1, Introduzione al C, repository helloworld_c).
Si stampino circonferenza e superficie di
un cerchio dato il raggio, ma questa volta il
raggio sia un numero in virgola mobile non negativo. */

#include <stdio.h>

#define Pi 3.141592

int main( void ){

  float circonferenza, area;
  float raggio;

  do {
    printf( "Inserisci raggio non negativo : " );
    scanf( "%f", &raggio );

  } while( raggio < 0.0 );

  circonferenza = 2.0 * Pi * raggio;
  area = Pi * raggio * raggio;

  printf( "Circonferenza : %.3f\n", circonferenza );
  printf( "Area : %.3f\n", area );

  return 0;
}
