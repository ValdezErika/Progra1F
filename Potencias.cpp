#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Numeros enteros.  Elevar el primer n�mero a la potencia del segundo n�mero. No debe permitir n�meros mayores a 10.
	int num, num2;
	cout<<"Ingrese un n�mero:";
	cin>>num;
	cout<<"Ingresar otro n�mero:";
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

