#include <iostream>
#include <cstdlib>
using namespace std;

void mostrarmensaje(){
	system("cls");
	cout<<"Que desea hacer?"<<endl;

	int numero;
	int resultado;
	int num;
	
	cout<<"1. Ingresar un numero"<<endl;
	cout<<"2. Ingresar una palabra"<<endl;
	cout<<"3. Ingresar una letra"<<endl;
	cin>>num;
	
	if(num==1){//multiplos
		int numero;
		cout << "Ingrese numero";
		cin>>numero;
		cout<<"Su numero es"<<numero;
	}
	
	else if(num == 2){//palabra
		string palabra;
		cout << "Ingrese palabra";
		cin>>palabra;
		cout<<"Su paralbra es:"<<palabra;
	}
	else{//letra
		char letra;
		cout << "Ingrese letra:";
		cin>>letra;
		cout<<"Su letra es:"<<letra;
	}
}

	
	
	int main(int argc, char *argv[]) {
		int num1;
		int control=1;
		do{
			mostrarmensaje();
			
			cout << endl << "Desea continuar? 1. Si, 2. No";
			cin >> control;
				if (control != 1 && control != 2) {
				control == 1;
				cout << "No siguio instrucciones";
			}
		}while(control == 1);
		return 0;
	}
	
	
