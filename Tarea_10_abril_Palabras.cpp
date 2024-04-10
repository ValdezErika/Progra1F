#include <iostream>
using namespace std;

string letras(string a, string b){
	string resultado;
	
	return resultado;
}

void mostrarmensaje(){
	cout<<"Hola! Ingresar dos palabras porfavor";
}

int main(int argc, char *argv[]) {
	string a,b;
	string resultado;
	int control = 1;
	do {
		mostrarmensaje();
		cin >> a;
		cin >> b;
		
		string resultado = letras(a,b);
		cout << endl << "La palabra es: " <<a<<b;
		
		cout << endl << "Desea continuar? 1. Si, 2. No";
		cin >> control;
		if (control != 1 && control != 2) {
			control == 1;
			cout << "Por favor siga instrucciones";
		}
		
	}while (control==1);
	return 0;
}

