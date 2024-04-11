#include <iostream>
using namespace std;
//Crear un menú de 5 opciones, donde cada una de las 5 opciones muestre un mensaje diferente. Esto puede ser con funciones void.

void mensaje(){
	int opciones;
	
	
	cout<<"Que sabor de elado desea?"<<endl;
	cout<<"1.Fresa"<<endl;
	cout<<"2.Vainilla"<<endl;
	cout<<"3.Chocolate"<<endl;
	cout<<"4.Cafe"<<endl;
	cout<<"5.Ron con pasas"<<endl;
	cin>>opciones;
	cout<<"Su sabor es:"<<opciones;
}
int main(int argc, char *argv[]) {
	
	mensaje();
	
	return 0;
}

