#include <iostream>
using namespace std;

double decimal(double num1, double num2, double num3){
	double resultado;
	resultado=num1+num3+num2;
	
	return resultado;
}
void mostrarmensaje(){
	cout<<"Podría ingresar tres numeros con decimales, porfavor";
}

int main(int argc, char *argv[]) {
	//Crear un programa que solicite tres numeros con decimales. Enviar los numeros a una función y sumarlos.
	double num1,num2,num3;
	int control = 1;
	
	do{
		mostrarmensaje();
		cin>>num1;
		cin>>num2;
		cin>>num3;
		
		double resultado = decimal(num1, num2,num3);
			cout<<"La suma es:"<<resultado;
			
		cout << endl << "Desea continuar? 1. Si, 2. No";
		cin >> control;
		if (control != 1 && control != 2) {
			control == 1;
			cout << "No siguio instrucciones";
		}
	}while(control == 1);
	return 0;
}

