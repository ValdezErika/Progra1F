#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Ciclos infinitos por voluntad propia
	int control = 1;
	
	do{
		cout<<"Hola estudiantes";
		cout<<endl <<"Bienvenidos al ciclo";
		cout<< endl <<"Desea repetir? 1. Si 2.No";
		cin>>control;
	} while (control == 1);
	cout<<"Salimos del ciclo";
	return 0;
}

