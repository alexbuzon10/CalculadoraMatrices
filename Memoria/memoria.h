/// FILE: memoria.h
///     - AUTHOR: By Alejandro Buzón García (@alexbuzon10)
///     - CREATED: 28/03/2026
///     - UPDATED: 28/03/2026 
#ifndef MEMORIA_H
#define MEMORIA_H
    /**
     * FUNCTION: double **reservarMemoriaMatriz(int filas, int columnas)
     *      DESCRIPTION: reservation of a dinamic matrix
     *      PARAMETERS: 
     *          - int filas
     *          - int columnas
     *      RETURN: a dinamic matrix pointer
     */
    double **reservarMemoriaMatriz(int filas, int columnas);

    /**
     * FUNCTION: void liberarMemoriaMatriz(double ***matriz)
     *      DESCRIPTION: this function free the dinamic matrix memory
     *      PARAMETERS: 
     *          - double ***matriz
     *      RETURN: Nothing
     */
    void liberarMemoriaMatriz(double ***matriz);

    /**
     * FUNCTION: double *reservarMemoriaVector(int tam)
     *      DESCRIPTION: reservation of a dinamic vector
     *      PARAMETERS:
     *          - int tam. 
     *      RETURN: a dinamic vector pointer
     */
    double *reservarMemoriaVector(int tam);

    /**
     * FUNCTION: void liberarMemoriaVector(double **vec)
     *      DESCRIPTION: this function free the dinamic vector memory
     *      PARAMETERS:
     *          - double **vec
     *      RETURN: Nothing
     */
    void liberarMemoriaVector(double **vec);
#endif