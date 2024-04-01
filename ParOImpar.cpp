#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//ESCRIBIR UN PROGRAMA QUE PIDA AL USUARIO UN NÚMERO ENTERO 
	//Y MUESTRE POR PANTALLA SI ES PAR O IMPAR.
	int numero;
	cout << "Ingrese numero par o impar: ";
	cin >> numero;
	//condicion de residuo con el simbolo de porcentaje
	if (numero % 2 == 0){
		cout << "Es numero par";
	} 
	else {
		cout << "Es numero impar";
	}
	return 0;
}

