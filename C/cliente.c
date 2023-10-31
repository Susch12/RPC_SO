#include <stdio.h>
#include <stdlib.h>
#include "cuad.h"

main(int argc, char *argv[]){
    int a; 
    int per;
    double sup;
    if(argc != 2){
        fprintf(stderr,"Error, uso: %s a \n",argv[0]);
        exit(1);
    }
    a = atoi(argv[1]);

    per = perimetro(a);
    sup = area(a);

    printf("El perimetro del cuadrado es %d \n",per);
    printf("El area del cuadrado es %g \n",sup);
}