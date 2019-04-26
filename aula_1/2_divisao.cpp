/**
Autor: Lucy Anne de Omena Evangelista
Data: 04/2018
Exercicio: Faça um programa que leia dois números reais A e B digitados pelo teclado e imprima a divisão de A por B.

**/
#include <iostream>

using namespace std;

int main(){

double a, b, s;

cin>>a >> b;

s = a/b;

cout.precision(2);
cout.setf(ios::fixed);

cout << s <<  "\n";

return 0;
}
