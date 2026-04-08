/// FILE: memoria.cpp
///     - AUTHOR: Alejandro Buzón García (@alexbuzon10)
///     - CREATED: 28/03/2026
///     - UPDATED: 04/04/2026
#include <cstdio>
#include <cstdlib>
#include <new>
#include "memoria.h"

using namespace std;

double **reservarMemoriaMatriz(int filas, int columnas){
    double **matriz = new double* [filas];
    try{
        *matriz = new double [filas * columnas]; 
    } catch (const bad_alloc& e){
        delete [] matriz; 
        throw;
    }
    for (int i = 0; i < filas; i++){
        matriz[i] = matriz[0] + (i * columnas);
    }
    return matriz;
}

void liberarMemoriaMatriz(double ***matriz){
    if(*matriz != nullptr){
        delete [] **matriz;
        delete [] *matriz;
        *matriz = nullptr; 
    }
}

double *reservarMemoriaVector(int tam){
    double *vec = new double[tam];
    return vec;
}

void liberarMemoriaVector(double **vec){
    delete [] *vec;
    *vec = nullptr;
}