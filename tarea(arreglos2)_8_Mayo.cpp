#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	const int tamanio = 3;
	int arreglo[tamanio];
	
	for (int i = 1; i < 4; i++) {
		cout << "Ingrese un numero en la posicion " 
			<< i << endl;
		cin >> arreglo[i];
	}
	
	cout<<"------------------------------------------------------"<<endl;
	
	const int tamanio1= 8;
	int arreglo1[tamanio1];
	
	for (int i = 1; i < 9; i++) {
		cout << "Ingrese un numero en la posicion " 
			<< i << endl;
		cin >> arreglo1[i];
	}
	
	cout<<"------------------------------------------------------"<<endl;
	
	const int tamanio2 = 5;
	int arreglo2[tamanio2];
	
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un numero en la posicion " 
			<< i << endl;
		cin >> arreglo2[i];
	}
	
	cout<<"------------------------------------------------------"<<endl;
	
	const int tamanio3 = 10;
	int arreglo3[tamanio3];
	
	for (int i = 1; i < 4; i++) {
		cout << "Ingrese un numero en la posicion " 
			<< i << endl;
		cin >> arreglo3[i];
	}
	
	cout<<"------------------------------------------------------"<<endl;
	
	const int tamanio4 = 2;
	int arreglo4[tamanio4];
	
	for (int i = 1; i < 3; i++) {
		cout << "Ingrese un numero en la posicion " 
			<< i << endl;
		cin >> arreglo4[i];
	}
	
	cout<<"------------------------------------------------------" <<endl;
	
	return 0;
}

