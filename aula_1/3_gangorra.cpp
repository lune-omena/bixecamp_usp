/**
Autor: Lucy Anne de Omena Evangelista
Data: 04/2018
Exercicio: Mostrar se a gangorra está em equilíbrio, e se estiver desequilibrada, mostrar para qual lado ela está pendendo.

**/
#include <iostream>

using namespace std;

int main(){

int p1, c1, p2, c2;

cin >> p1 >> c1 >> p2 >> c2;

if ((p1<10 or p1>100) or (c1<10 or c1>100) or (p2<10 or p2>100) or (c2<10 or c2>100)){

cout << "Valor não válido foi digitado.\n";

} else {
	if (p1 * c1 == p2 * c2){
	cout << 0 << "\n";

	} else { 
		if ((p1 * c1) > (p2 * c2)){
			cout << -1 << "\n";
		} else {
			cout << 1 << "\n";
		}
	}
}

return 0;
}
