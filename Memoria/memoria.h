/// memoria.h
// Por Alejandro Buzón García
// Created: 28/03/2026
// Updated: 28/03/2026 
#ifndef MEMORIA_H
#define MEMORIA_H
    /**
     * double **reservarMemoriaMatriz(int filas, int columnas)
     *      Descripción: Reserva la memoria de una matriz dinámica
     *      Parámetros: 
     *          - int filas. Número de filas
     *          - int columnas. Número de columnas
     *      Devolución:
     *          - Puntero de una matriz dinámica
     */
    double **reservarMemoriaMatriz(int filas, int columnas);

    /**
     * void liberarMemoriaMatriz(double ***matriz)
     *      Descripción: Libera la memoria de una matriz dinámica
     *      Parámetros: 
     *          - double ***matriz. La matriz dinámica pasada por referencia
     *      Devolución: NADA
     */
    void liberarMemoriaMatriz(double ***matriz);

    /**
     * double *reservarMemoriaVector(int tam)
     *      Descripción: Reserva la memoria de un vector dinámico
     *      Parámetros:
     *          - int tam. Tamaño del vector dinámico
     *      Devolución:
     *          - Puntero de un vectro dinámico.
     */
    double *reservarMemoriaVector(int tam);

    /**
     * void liberarMemoriaVector(double **vec)
     *      Descripción: Libera la memoria de un vector dinámico
     *      Parámetros:
     *          - double **vec. El vector dinámico pasado por referencia
     *      Devolución: NADA
     */
    void liberarMemoriaVector(double **vec);
#endif