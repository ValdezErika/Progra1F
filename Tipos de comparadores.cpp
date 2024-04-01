#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// utilizar diferentes condiciones

	int num1, num2;
		cout <<"Ingrese el primer numero;" <<endl;
	cin >> num1;
		cout <<"Ingrese el primer numero;" <<endl;
	cin >> num2;
	// uso de ==
	if (num1 == num2){
		cout <<"Los numeros son igualitos" <<endl;
	}
	// uso de !=
	if(num1 != num2) {
		cout<<"Los numeros no son igualitos" << endl;
	}
	if(num1 <= num2) {
		cout<<"El numero 1 es menor o igual que el numero 2" <<endl;
	}
	if(num1 >= num2) {
		cout<<"El numero 1 es mayor o igual que el numero 2" <<endl;
	}
	if(num1 < num2) {
		cout<<"El numero 1 es menor que el numero 2" <<endl;
	}
	if(num1 > num2) {
		cout<<"El numero 1 es mayor que el numero 2" <<endl;
	}
	
	
	bool bool1= true;
	bool bool2 = false;
	
	if(bool1 == bool2) {
		cout <<"Las dos variables bool son iguales" <<endl;
	}
	else {
		cout <<"Las dos variables bool son diferentes" <<endl;
		}
	
	return 0;
}

