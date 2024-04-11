#include <iostream>
using namespace std;

//espacio para variable global
int global=6;

void mostrarmensaje(int numero){
	int valor=0;
	cout<<"Valor"<<valor<<endl;
	cout<<"numero"<<numero<<endl;
	cout<<"Global"<<global<<endl;
	
	global = global +10;
}

int main(int argc, char *argv[]) {
	int numero = 3;
		mostrarmensaje(numero);
		cout<<"numero"<<numero<<endl;
	cout<<"global despues de modificar"<<global<<endl;
	
	return 0;
}

