#ifndef MEMORIA_H
#define MEMORIA_H
    double **reservarMemoriaMatriz(int filas, int columnas);
    void liberarMemoriaMatriz(double ***matriz);
    double *reservarMemoriaVector(int tam);
    void liberarMemoriaVector(double **vec);
#endif