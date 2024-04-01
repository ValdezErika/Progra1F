#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Numeros enteros.  Elevar el primer número a la potencia del segundo número. No debe permitir números mayores a 10.
	int num, num2;
	cout<<"Ingrese un número:";
	cin>>num;
	cout<<"Ingresar otro número:";
	cin>>num2;
	
	int base=num;
	int expo=num2;
	int r= 1;
	
	for(int a=1; a<=expo; a++){
		r=r*base;
	}
	cout<<"El resultado es:"<<r;
	
	return 0;
}

