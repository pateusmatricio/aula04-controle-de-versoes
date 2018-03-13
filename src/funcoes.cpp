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
		numerosUsados[i] = 1;
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(numeros[i] == numeros[j] && j != i){
				numerosUsados[i] += 1;
			} else {
				numerosUsados[j] = 0;
			}
		}
	}

	for(i = 0; i < 10; i++) {
		cout << numeros[i] << " aconteceu " << numerosUsados[i] << " vezes." << endl;
	}
}

void notas(int valor){
	int valorInicial, n100, n50, n20, n10, n5, n2, n1;

	valorInicial = valor;
	n100 = valor / 100;
	valor = valor % 100;
	n50 = valor / 50;
	valor = valor % 50;
	n20 = valor / 20;
	valor = valor % 20;
	n10 = valor / 10;
	valor = valor % 10;
	n5 = valor / 5;
	valor = valor % 5;
	n2 = valor / 2;	
	valor = valor % 2;
	n1 = valor / 1;
	valor = valor % 1;

	cout << "Para representar " << valorInicial << " reais Serão necessárias:"<< endl;
	if(n100 > 0)cout << n100 << " notas de 100 reais, " << endl;
	if(n50 > 0)cout << n50 << " notas de 50 reais, " << endl;
	if(n20 > 0)cout << n20 << " notas de 20 reais, " << endl;
	if(n10 > 0)cout << n10 << " notas de 10 reais, " << endl;
	if(n5 > 0)cout << n5 << " notas de 5 reais, " << endl;
	if(n2 > 0)cout << n2 << " notas de 2 reais, " << endl;	
	if(n1 > 0)cout << n1 << " notas de 1 real." << endl;
}