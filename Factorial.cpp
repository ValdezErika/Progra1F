#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Crear un programa que calcule el factorial de 1 número entero ingresado.
	int num;
	cout<<"Ingrese un número para averiguar su factorial:";
	cin>>num;
	int fac = 1;
	
	for(int a=num; a>0; a--){
		fac=fac*a;
		cout << "el valor ahora es" <<fac<<endl;
	}
	cout<<"Resultado:"<<fac;
	return 0;
}

