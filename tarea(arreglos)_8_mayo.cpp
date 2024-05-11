#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//ARREGLOS
	//Puedo seguir guardando datos en la misma variable
	int arreglo[15];
	
	cout<<"Hola! Por favor ingresar los numeros para el arreglo" <<endl;
	
	for (int a = 1; a < 16; a++) {
		cout << "Ingrese un numero en la posicion " 
			<< a << endl;
		cin >> arreglo[a];
	}
	
	return 0;
}

