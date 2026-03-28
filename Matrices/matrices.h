/// FILE: matrices.cpp
///     - AUTHOR: Alejandro Buzón García (@alexbuzon10)
///     - CREATED: 28/03/2026
///     - UPDATED: 28/03/2026
#ifndef MATRICES_H
#define MATRICES_H
    /**
     * TYPEDEF: strcMatriz
     * STRUCT: Matriz
     * DESCRIPTION: matrix structure
     */
    typedef struct matriz
    {
        double  **matriz;   // Matrix
        int     filas;      // Rows number
        int     columnas;   // Columns number
    } strcMatriz;

    /**
     * FUNCTION: strcMatriz multiplicarMatrices(strcMatriz m1, strcMatriz m2)
     *      DESCRIPTION: function which multiply two matrix (m1 and m2)
     *      PARAMETERS: 
     *          - strcMatriz m1
     *          - strcMatriz m2
     *      RETURN: The result of multiply m1 by m2
     */
    strcMatriz multiplicarMatrices(strcMatriz m1, strcMatriz m2);

    /**
     * FUNCTION: double determinante(strcMatriz mat)
     *      DESCRIPTION: Función que calcula el determinante de una matriz cuadrada
     *      PARAMETERS: 
     *          - strcMatriz mat
     *      RETURN: The determinant of the input matrix
     */
    double determinante(strcMatriz mat);

    /**
     * FUNCTION: void imprimirMatriz(strcMatriz mat)
     *      DESCRIPTION: it print a matrix
     *      PARAMETERS:
     *          - strcMatriz mat
     *      RETURN: Nothing
     */
    void imprimirMatriz(strcMatriz mat);

    /**
     * FUNCTION: strcMatriz rellenarMatrizAleatorio(int filas, int columnas)
     *      DESCRIPTION: function which fill a matrix with random decimal numbers between 0 and 10
     *      PARAMETERS: 
     *          - int filas
     *          - int columnas
     *      RETURN: A random generated matrix
     */
    strcMatriz rellenarMatrizAleatorio(int filas, int columnas);

    /**
     * FUNCTION: strcMatriz rellenarMatrizAleatorioEnteros(int filas, int columnas)
     *      DESCRIPTION: function which fill a matrix with random integers numbers between 0 and 10
     *      PARAMETERS: 
     *          - int filas
     *          - int columnas
     *      RETURN: A random generated matrix
     */
    strcMatriz rellenarMatrizAleatorioEnteros(int filas, int columnas);
#endif