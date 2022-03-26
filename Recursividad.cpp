#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void hanoi(int n, char x, char y, char z){
	if(n==1){
		cout << "Mueve de " << x << " a " << z << endl;
	} else {
		hanoi(n-1, x, z, y);
		cout << "Mueve de " << x << " a " << z << endl;
		hanoi(n-1, y, x, z);
	}
}

int fibonacci(int posicion){
	int numero;
	if(posicion == 1 || posicion == 2){
		numero = 1;
	} else {
		numero = fibonacci(posicion-1) + fibonacci(posicion-2);
	}
	return numero;
}

int factorial(int numero){
	int fact;
	if(numero == 0){
		fact = 1;
	} else {
		fact = numero * factorial(numero-1);
	}
	return fact;
}
int main() {
	int torre;
	cout << "Torre de hanoi a resolver ";
	cin >> torre;
	char a='a'; char b='b'; char c='c';
	hanoi(torre, a, b, c);
	return 0;
}
