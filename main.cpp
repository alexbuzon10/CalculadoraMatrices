#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "./Matrices/matrices.h"
#include "./Memoria/memoria.h"

using namespace std;

int main(int argc, char const *argv[]){
    // Compruebo si el usuario introduce argumentos
    if (argc < 2){
        printf("Debe introducir al menos algún argumento.\n");
        return EXIT_FAILURE;
    }
    string argumento = argv[1];
    ///// TESTS
    if (argumento == "--multiplicar"){
        // Declaro las matrices de pruebas
        strcMatriz mat1 = rellenarMatrizAleatorioEnteros(4, 4);
        strcMatriz mat2 = rellenarMatrizAleatorioEnteros(4, 4);
        strcMatriz mat12 = multiplicarMatrices(mat1, mat2);

        //Imrpimo las matrices

        printf("Matriz 1:\n");
        imprimirMatrices(mat1);

        printf("Matriz 2:\n");
        imprimirMatrices(mat2);

        printf("Matriz resultado:\n");
        imprimirMatrices(mat12);

        // libero la memoria antes de finalizar
        liberarMemoriaMatriz(&(mat1.matriz));
        liberarMemoriaMatriz(&(mat2.matriz));
        liberarMemoriaMatriz(&(mat12.matriz));
    }else if(argumento == "--determinante"){
        if (argc < 3){
            printf("Debes introducir la dimensión de la matriz.\n");
            return EXIT_FAILURE;
        }
        // Declaro la matriz de prueba
        if (!(atoi(argv[2]))){
            printf("La dimensión introducida tiene un formato erróneo.\n");
            return EXIT_FAILURE;
        }
        strcMatriz mat = rellenarMatrizAleatorioEnteros(atoi(argv[2]), atoi(argv[2]));

        // La imprimo
        imprimirMatrices(mat);

        // Imprimo su determinante
        printf("El determinante de la matriz es %.4lf.\n\n", determinante(mat));

        // Libero la memoria antes de finalizar
        liberarMemoriaMatriz(&(mat.matriz));
    }else{
        printf("El argumento introducido es desconocido.\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}