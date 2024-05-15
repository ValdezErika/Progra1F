#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int menu;
	int arreglo[10];
	
	
	while(menu != 0){
		cout<<"¿Que es lo que desea realizar?"<<endl;
		cout<<"1)Llenar un arreglo de atras para adelante"<<endl;
		cout<<"2)Clonar un arreglo"<<endl;
		cout<<"3)Ingresar 10 numeros positivos y negativos, luego convetir negativos a positivos"<<endl;
		cout<<"4)Separar enteros y decimales"<<endl;
		cout<<"0)Salir"<<endl;
		cin>>menu;
		
		switch(menu)
		{
		case 1://Llenar un arreglo de atras para adelante
	for (int a = 9; a >= 0 ; a--) {
		cout << "Ingrese un numero " 
			<< a << endl;
		cin >> arreglo[a];
	}
	
	for(int a = 0; a < 10; a++){
		cout<<"El numero en la casilla "<<a<<" es: "<<arreglo[a] <<endl;
	}
	break;
		case 2://Clonar un arreglo
			int arreglo1[3];
			int arreglo2[3];
			
			for (int a = 0; a < 3 ; a++) {
				cout << "Ingrese un numero " 
					<< a << endl;
				cin >> arreglo1[a];
			}
			
			for(int a = 0; a < 3; a++){
				arreglo2[a]= arreglo1[a];
				cout<<"El numero "<< a <<" esta en la posicion "<<arreglo2[a]<<endl;
			}
	break;
		case 3: //Ingresar 10 numero y negativos a positivos
			int arreglo3[10];
			int e;
			for (int a = 0; a < 10; a++){
				cout<<"Ingrese un numero:"<<a<<endl;
				cin>>arreglo3[a];
				
				if(arreglo3[a] < 0){
					e= arreglo3[a] * -1;
					cout<<"El numero "<<e<<" esta en la posicion "<<a<<endl;
				}
				else{
				cout<<"El numero "<<arreglo3[a]<<" esta en la posicion "<<a<<endl;
				}
			}
	break;
		case 4://Separar enteros de decimales
			double arreglo4[5];
			int arreglo5[5];
			double arreglo6[5];
			
			for (int a = 0; a < 5; a++){
				cout<<"Ingrese un numero entero con decimales:"<<a<<endl;
				cin>>arreglo4[a];
				
				arreglo5[a]=arreglo4[a];
				arreglo6[a]= arreglo4[a] - arreglo5[a];
				
				cout<<"El valor entero del arreglo " <<arreglo4[a] <<" es:"<<arreglo5[a]<<endl;
				cout<<"El valor decimal del arreglo " <<arreglo4[a] <<" es:"<<arreglo6[a]<<endl;
			}
			
		}
	}
	return 0;
}

