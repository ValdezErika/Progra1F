#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Crear un menú que pregunte si quiere seguir dentro del menú, las opciones serán:1.Si 2.No
	int control = 1;
	
	do{
		cout<<"Bienvenido a nuestro menu";
		cout<< endl <<"¿Desea seguir dentro del menu? 1. Si 2.No";
		cin>>control;
			if(control != 1 && control != 2){
			cout<<"No siguio instrucciones"<<endl;
			control == 1;
			cout<<"Bienvenido a nuestro menu";
			cout<< endl <<"¿Desea seguir dentro del menu? 1. Si 2.No";
			cin>>control;
		}
	} while (control == 1);
	cout<<endl<<"Salimos del ciclo";
	return 0;
}

