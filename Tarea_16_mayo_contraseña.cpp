#include <iostream>


using namespace std;

int Suma(int contrasenea, int numero){
	int resultado;
	resultado = contrasenea + numero;
	resultado = resultado * numero;
	return resultado;
}

int main(int argc, char *argv[]) {
	
	int contrasenea;
	int numero;
	
	cout <<"Ingrese una contraseña numerica para cifrarla"<<endl;
	cin>>contrasenea;
	cout <<"Ingrese un numero para cifrarla"<<endl;
	cin>>numero;
	
	int resultado = Suma(contrasenea, numero);
	
	cout << "el resultado es: " << resultado;
	return 0;
}

