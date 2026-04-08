all: compilarMemoria libreriaMemoria compilarMatrices libreriaMatrices compilarMain

compilarMemoria: ./Memoria/memoria.cpp ./Memoria/memoria.h
	@g++ -c Memoria/memoria.cpp -o Memoria/memoria.o

libreriaMemoria: ./Memoria/memoria.o
	@ar -rscv libMemoria.a Memoria/memoria.o	

compilarMatrices: ./Matrices/matrices.cpp ./Matrices/matrices.h
	@g++ -c Matrices/matrices.cpp -o Matrices/matrices.o

libreriaMatrices: ./Matrices/matrices.o
	@ar -rscv libMatrices.a Matrices/matrices.o

compilarMain: main.cpp libMatrices.a libMemoria.a
	@g++ main.cpp -L. libMatrices.a libMemoria.a -o main
	@echo "Compilacion finalizada con éxito"

clean: 
	@rm Memoria/memoria.o Matrices/matrices.o
	@echo "Limpieza realizada con éxito"