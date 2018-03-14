#include <iostream>
using std::cout;
using std::endl;

#include "funcoes.h"

float milionario(float salario, float despesas){
	return 1000000/((salario-despesas)*12);
}

vector<int> numerosRepetidos(int *numeros){
	int repeticoes = 1, numeroAtual = numeros[0];
	vector<int> v;

	for (int i = 1; i < 10; i++) {
		if (numeroAtual == numeros[i]) {
			repeticoes += 1;
		} else {
			v.push_back(numeroAtual);
			v.push_back(repeticoes);
			numeroAtual = numeros[i];
			repeticoes = 1;
		}
	}
	
	v.push_back(numeroAtual);
	v.push_back(repeticoes);

	return v;
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