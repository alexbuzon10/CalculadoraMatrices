#ifndef MATRICES_H
#define MATRICES_H
    /**
     *  struct matriz
     *      Descripción: Estructura de matrices
     */
    typedef struct matriz
    {
        double  **matriz;   // Matriz de tipo double
        int     filas;      // Número de filas
        int     columnas;   // Número de columnas
    } strcMatriz;
    
    strcMatriz multiplicarMatrices(strcMatriz m1, strcMatriz m2);

    double determinante(strcMatriz mat);

    void imprimirMatrices(strcMatriz mat);

    strcMatriz rellenarMatrizAleatorio(int filas, int columnas);

    strcMatriz rellenarMatrizAleatorioEnteros(int filas, int columnas);
#endif