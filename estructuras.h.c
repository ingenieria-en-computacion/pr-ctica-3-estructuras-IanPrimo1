
#ifndef _CONJUNTO_H_
#define _CONJUNTO_H_
#define TAM 1000
#include <stdbool.h>


typedef int DATO;


typedef struct Conjunto{
DATO datos [TAM];
short cant;
} CONJUNTO; //ALIAS


CONJUNTO conjunto_vacio();
CONJUNTO agregar (CONJUNTO, DATO);
bool pertenece (CONJUNTO,DATO);
CONJUNTO quitar (CONJUNTO,DATO);
bool es_vacio(CONJUNTO);
int cardinal (CONJUNTO);
CONJUNTO _union(CONJUNTO c, CONJUNTO d);
void printf_conjunto(CONJUNTO);


#endif

