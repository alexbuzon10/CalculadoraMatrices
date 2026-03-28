#include <stdio.h>
#include <stdlib.h>
#include "memoria.h"

double **reservarMemoriaMatriz(int filas, int columnas){
    double **matriz = (double **)malloc(filas * sizeof(double *));
    if (matriz == NULL){
        printf("No se ha podido hacer la reserva de memoria.\n");
        exit(EXIT_FAILURE);
    }
    *matriz = (double *)malloc(filas * columnas * sizeof(double));
    if (*matriz == NULL){
        printf("No se ha podido hacer la reserva de memoria.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < filas; i++){
        matriz[i] = &(matriz[0][i * columnas]);
    }
    return matriz;
}

void liberarMemoriaMatriz(double ***matriz){
    free(**matriz);
    **matriz = NULL;
    free(*matriz);
    *matriz = NULL;
}

double *reservarMemoriaVector(int tam){
    double *vec = (double *)malloc(tam * sizeof(double));
    return vec;
}

void liberarMemoriaVector(double **vec){
    free(*vec);
    *vec = NULL;
}
