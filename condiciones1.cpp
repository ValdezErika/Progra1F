#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a = 0; //valor de numero entero
	//un igual para dar valor
	
	//Estructuras condicionales
	if (a == 0){ //Si pasa algo vamos ejecutar codigo
		//dos signos iguales para comparar
		cout << "Se cumplió de que es 0 ";
	}
	else { //la estructura else significa "cualquier otra cosa"
		cout << "Tiene otro valor difente a 0 ";
	} //la estructura else, siempre tiene que ir despues de un if.
	
	return 0;
}

