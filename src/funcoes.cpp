#include <iostream>
using std::cout;
using std::endl;

#include "funcoes.h"

float milionario(float salario, float despesas){
	return 1000000/((salario-despesas)*12);
}

void numerosRepetidos(int * numeros){
	int i, j, repetido = 1, k = 0;
	int numerosUsados[10];
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(numeros[i] == numeros[j] && j != i){
				repetido++;
			}
		}
		numerosUsados[k] = numeros[i];
		k++;
		
		for(j = 0; j < 10; j++){
			if(numeros[i] == numeros[j] && j != i){
				repetido++;
			}
		}
		cout << "o numero " << numeros[i] << " foi digitado " << repetido << " vezes!" << endl;
		repetido = 1;
	}
}
