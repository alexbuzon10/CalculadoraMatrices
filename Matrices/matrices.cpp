/// FILE: matrices.cpp
///     - AUTHOR: Alejandro Buzón García (@alexbuzon10)
///     - CREATED: 28/03/2026
///     - UPDATED: 28/03/2026
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include "matrices.h"
#include "../Memoria/memoria.h"

strcMatriz multiplicarMatrices(strcMatriz m1, strcMatriz m2){
    if (m1.columnas != m2.filas){
        printf("No se pueden multiplicar las matrices.\n");
        exit(EXIT_FAILURE);
    }
    strcMatriz matrizResultado;
    matrizResultado.filas = m1.filas;
    matrizResultado.columnas = m2.columnas;
    matrizResultado.matriz = reservarMemoriaMatriz(matrizResultado.filas, matrizResultado.columnas);
    for (int i = 0; i < matrizResultado.filas; i++){
        for (int j = 0; j < matrizResultado.columnas; j++){
            matrizResultado.matriz[i][j] = 0.0;
            for (int k = 0, l = 0; k < m1.columnas && l < m2.filas; k++, l++){
                matrizResultado.matriz[i][j] += m1.matriz[i][k] * m2.matriz[l][j];
            }
        }
    }
    return matrizResultado;
}

double determinante(strcMatriz mat){
    if (mat.filas != mat.columnas){
        printf("La matriz introducida no es cuadrada.\n");
        exit(EXIT_FAILURE);
    }
    // Para calcular el determinante voy a aplicar el método de Gauss
    double auxm[mat.filas][mat.columnas];
    // Duplicando la información de la matriz
    for (int i = 0; i < mat.filas; i++){
        for (int j = 0; j < mat.columnas; j++){
            auxm[i][j] = mat.matriz[i][j];
        }
    }
    double determinante = 1;
    for (int i = 0; i < mat.filas; i++){
        if (fabs(mat.matriz[i][i]) > 1e-9){
            for (int j = i + 1; j < mat.filas; j++){
                double factor = mat.matriz[j][i]/mat.matriz[i][i];
                for (int k = i; k < mat.columnas; k++){
                    mat.matriz[j][k] -= factor * mat.matriz[i][k];
                }
            }
        }else{
            for (int j = i + 1; j < mat.filas; j++){
                if (fabs(mat.matriz[j][i]) > 1e-9){
                    double *aux = mat.matriz[i];
                    mat.matriz[i] = mat.matriz[j];
                    mat.matriz[j] = aux;
                    determinante *= -1;
                    i--;
                    break;
                } else if (j == mat.filas - 1 && fabs(mat.matriz[j][i]) < 1e-9){
                    return 0.0;
                }
            }
        }
    }
    for (int i = 0; i < mat.filas; i++){
        determinante *= mat.matriz[i][i];
    }
    // Restableciendo datos matriz
    for (int i = 0; i < mat.filas; i++){
        for (int j = 0; j < mat.columnas; j++){
            mat.matriz[i][j] = auxm[i][j];
        }
    }
    return determinante;
}

void imprimirMatriz(strcMatriz mat){
    printf("[");
    for (int i = 0; i < mat.filas; i++){
        if (i == 0) printf("[");
        else printf(" [");
        for (int j = 0; j < mat.columnas - 1; j++){
            printf("%.4lf, ", mat.matriz[i][j]);
        }
        if (i < mat.filas - 1) printf("%.4lf],\n", mat.matriz[i][mat.columnas - 1]);
        else printf("%.4lf]", mat.matriz[i][mat.columnas - 1]);
    }
    printf("]\n\n");
}

strcMatriz rellenarMatrizAleatorio(int filas, int columnas){
    srand((unsigned) time(NULL));
    strcMatriz mat;
    mat.filas = filas;
    mat.columnas = columnas;
    mat.matriz = reservarMemoriaMatriz(mat.filas, mat.columnas);
    for (int i = 0; i < mat.filas; i++){
        for (int j = 0; j < mat.columnas; j++){
            mat.matriz[i][j] = (double)rand()/RAND_MAX + rand()%10;
        }
    }
    return mat;
}

strcMatriz rellenarMatrizAleatorioEnteros(int filas, int columnas){
    srand((unsigned) time(NULL));
    strcMatriz mat;
    mat.filas = filas;
    mat.columnas = columnas;
    mat.matriz = reservarMemoriaMatriz(mat.filas, mat.columnas);
    for (int i = 0; i < mat.filas; i++){
        for (int j = 0; j < mat.columnas; j++){
            mat.matriz[i][j] = ((int) pow(-1, rand()%2)) * rand()%10;
        }
    }
    return mat;
}