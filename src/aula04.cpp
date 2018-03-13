#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "funcoes.h"

#include "mergeSort.h"

int main(){

	int i, valor;
	float sal, desp;
	int * numeros = new int[10];

	cout << "informe seu salário" << endl;
	cin >> sal;
	cout << "informe suas despesas mensais" << endl;
	cin >> desp;
	cout << "você ficaria milionario em " << milionario(sal,desp) << " anos poupando desse jeito!!" << endl;
	cout << "digite 10 numeros:" << endl;

	for(i = 0; i < 10; i++){
		cin >> numeros[i];
	}

	mergeSort(numeros, 10);
	numerosRepetidos(numeros);
	cout << "Digite um valor em reais" << endl;
	cin >> valor;
	notas(valor);

	return 0;
}
