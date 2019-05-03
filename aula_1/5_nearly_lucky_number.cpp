/**

Autor: Lucy Anne de Omena Evangelista
Data: 05/2018
Exercicio: Nearly Lucky Number (http://codeforces.com/problemset/problem/110/A). Retornar se determinado digitado é quase um número de sorte (se possui 4 ou 7 números que são 4 ou 7). O número n vai de 1 até 10^18.

**/

#include <iostream>

using namespace std;

int main(){
	int i, rest, cont = 0;
	long n;	cin >> n;

	while (n != 0){
		rest = n % 10;
		if (rest == 4 or rest == 7) cont++;		
		n = n / 10;
	}
 
	if (cont == 4 or cont == 7) cout << "\nYES\n";
	else cout << "\nNO\n";
	
	return 0;
}
