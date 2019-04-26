/**

Autor: Lucy Anne de Omena Evangelista
Data: 04/2018
Exercicio: Softdrink (http://codeforces.com/contest/151/problem/A). Retornar  a quantidade máxima de drinks que um conjunto de amigos consegue fazer com o que têm.

**/
#include <iostream>
#include <algorithm> 

using namespace std;

bool comp (int a, int b){
	return (a < b);
}

int main () {

int n, k, l, c , d, p, nl, np;

cin >> n >> k >> l >> c >> d >> p >> nl >> np;

cout << std::min({(k*l)/(n*n),c*d/n,(p/np)/n}, comp) << "\n";

return 0;

} 
