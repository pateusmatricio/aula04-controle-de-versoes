#ifndef FUNCOES_H
#define FUNCOES_H

#include <vector>
using std::vector;

/** 
* @brief	Informa, a partir de um salario e das despesas mensais de uma pessoa, em quantos anos esse seria milionario
* @param	'salario' é o salário do mês do usuário, 'despesas' são as despesas mensais
* @return	Numero de anos que seriam necessários para ele acumular um milhão de reais
*/
float milionario(float salario, float despesas);

/**
*/

vector<int> numerosRepetidos(int * numeros);

/**
@brief Informa quantas e quais notas são necessárias para representar um valor
@param 'valor' é o valor em reais a ser representado
*/
void notas(int valor);

#endif
