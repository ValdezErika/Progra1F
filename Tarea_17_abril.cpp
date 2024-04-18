#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void NumerosCoordenadas(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}	
	
	int main(int argc, char *argv[]) {
		int opcion=1;
		int x,y;
		int numero;
		string palabra;
		int menu = 1;
		
		while (menu != 0 )
		{
			cout<<"Que menu desea?"<<endl;
			cout<<"1) Menu No.1"<<endl;
			cout<<"2) Menu No.2"<<endl;
			cout<<"0) salir"<<endl;
			cin>>menu;
			
			switch (menu)
			{
			case 1:
				system("cls");
					cout<<"Menu No.1"<<endl;
					cout<<"1) Coordenadas e imprimir un mensaje"<<endl;
					cout<<"2) Un numero e imprimirlo en la consola"<<endl;
					cout<<"3) Una palabra e imprimirla en la consola"<<endl;
					cout<<"4) Desea regresar"<<endl;
					cin>>opcion;
					
					switch (opcion)
					{
					case 1:
						cout << "Por favor ingresa una coordenada en x" << endl;
						cin >> x;
						cout << "Por favor ingresa una coordenada en y" << endl;
						cin >> y;
						
						NumerosCoordenadas(x,y);
						cout<<"Hola mundo"<<endl;
						break;
					case 2:
						cout << "Por favor ingresa un numero" << endl;
						cin >>numero;
						NumerosCoordenadas(60,10);
						cout<<numero<<endl;
						break;
					case 3:
						cout << "Por favor ingresar una palabra" << endl;
						cin >>palabra;
						for(int i=0 ; i<10; i++){
							NumerosCoordenadas(1,5+1);
							cout<<palabra<<endl;
						}
						break;
					}
					break;
				
			case 2:
				system("cls");
						  cout<<"Menu No.2"<<endl;
						  cout<<"1) Coordenadas e imprimir caracter ASCII"<<endl;
						  cout<<"2) Saludar a una persona"<<endl;
						  cout<<"3) Desea regresar"<<endl;
						  cin>>opcion;
						  switch (opcion) {
						  case 1: {
							  char car = 200;
							  NumerosCoordenadas(30, 30);
							  cout << car << endl;
						  }
						  break;
						  case 2:{
							  string saludo;
							  cout << "Por favor ingresa a quien saludar" << endl;
							  cin >> saludo;
							  cout << "Hola" <<" " << saludo << endl;
						  }
							  break;
						  }
				break;
			}
		}
		return 0;
	}
