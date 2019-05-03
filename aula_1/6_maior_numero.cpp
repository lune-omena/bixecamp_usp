/**

Autor: Lucy Anne de Omena Evangelista
Data: 05/2018
Exercicio: Desafio do maior número (http://www.codcad.com/problem/154). Retornar o maior numero digitado em uma sequencia terminada por 0, restringida por 100 entradas.

**/
#include <iostream>

using namespace std;

int main(){
	int maior, n, tam = 2;
	cin >> n;
	maior = n;

	while(n != 0 && tam != 100){
	cin >> n;
	if (n > maior) maior = n;
	
	tam++;
	}
	
	cout << maior << "\n";
	
	return 0;
}
