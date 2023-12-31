/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "cuadro.h" 
int main (int argc, char *argv[]) 
{ 
    CLIENT *clnt; 
    char *host; 
    int a; 
    int *per; 
    double *sup; 
    if (argc !=3 ) { 
        fprintf(stderr,"Error, uso: %s a host \n",argv[0]); 
        exit(1); 
    } 
    a = atoi(argv[1]); 
    host = argv[2]; 
    clnt = clnt_create (host, CUADRO_PROG, CUADRO_VERS, "udp"); 
    if (clnt == NULL) { 
        clnt_pcreateerror (host); 
        exit (1); 
    } 
    per = perimetro_1(&a, clnt); 
    if (per == (int *) NULL) { 
        clnt_perror (clnt, "call failed"); 
    } 
    sup = area_1(&a, clnt); 
    if (sup == (double *) NULL) { 
        clnt_perror (clnt, "call failed"); 
    } 
    printf("El perimetro del cuadrado es %d \n",*per); 
     printf("El area del cuadrado es %f \n",*sup); 
    clnt_destroy(clnt); 
}
