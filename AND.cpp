#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	// 25 años de servicio y mayor a 65
	int aneo, edad;
	cout <<"Ingrese los años de servicio de la persona:";
	cin >> aneo;
	
	cout <<"Ingrese la edad de las personas:";
	cin >> edad;
	
	if (aneo>=25 && edad>=65){
		cout <<"Ya se puede jubilar, felicidades";
	}
	else {
		cout <<"Aun no puede jubilarse";
	}
	
	return 0;
}

