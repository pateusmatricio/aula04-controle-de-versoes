aula04 = ./bin/teste

CC = g++

parametrocpp = -Wall -pedantic -ansi -std=c++11

objetos = ./build/aula04.o ./build/funcoes.o ./build/mergeSort.o

aula04: $(aula04)

$(aula04): parametrocpp += -I./include/
$(aula04): $(objetos)
	$(CC) $^ $(parametrocpp) -o $@

./build/aula04.o: ./src/aula04.cpp ./include/funcoes.h
	$(CC) -c $(parametrocpp) $<	-o $@

./build/funcoes.o: ./src/funcoes.cpp ./include/funcoes.h
	$(CC) -c $(parametrocpp) $<	-o $@

./build/mergeSort.o: ./src/mergeSort.cpp ./include/mergeSort.h
	$(CC) -c $(parametrocpp) $< -o $@

dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p include
	mkdir -p src
	mkdir -p doc
	mkdir -p lib
	mkdir -p test
	
	
