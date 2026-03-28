#include <stdio.h>
#include <stdlib.h>
#include "./Matrices/matrices.h"
#include "./Memoria/memoria.h"

int main(int argc, char const *argv[]){
    strcMatriz mat1 = rellenarMatrizAleatorioEnteros(4, 4);
    imprimirMatrices(mat1);
    printf("El determinante de la matriz es %.4lf.\n\n", determinante(mat1));
    imprimirMatrices(mat1);

    // Liberación de memoria
    liberarMemoriaMatriz(&(mat1.matriz));
    return EXIT_SUCCESS;
}