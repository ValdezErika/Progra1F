#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int menu;
	const int suma=5; 
	int arreglo[suma];
	int resultado;
	const int num=5;
	int arreglo1[num];
	int mayor;
	int promedio;
	int arreglo2[10];
	int numero1;
	bool buscar  = false;
	
	
	while(menu != 0){
		cout<<"¿Que es lo que desea realizar?"<<endl;
		cout<<"1)Sumar números"<<endl;
		cout<<"2)Encontrar el mayor elemento"<<endl;
		cout<<"3)Realizar un promedio"<<endl;
		cout<<"4)Buscar un número"<<endl;
		cout<<"0)Salir"<<endl;
		cin>>menu;
		
		switch(menu)
		{
		case 1://Sumar numeros
			system("cls");
			cout<<"Ingresar 5 numeros para sumarlos" <<endl;
			for (int i = 1; i < 6; i++) {
				cout << "Ingrese un numero en la posicion " 
					<< i << endl;
				cin >> arreglo[i];
			}
			resultado = arreglo[1]+arreglo[2]+arreglo[3]+arreglo[4]+arreglo[5];  
			cout<<"El resultado de la suma es:"<<resultado <<endl;
			
			break;
		case 2: //encontrar el numero mayor
			system("cls");
			cout<<"Ingresar 5 numeros para saber cual es el mayor" <<endl;
			for (int i = 1; i < 6; i++) {
				cout << "Ingrese un numero en la posicion " 
					<< i << endl;
				cin >> arreglo1[i];
			}
			if(arreglo1[1]>arreglo1[2] && arreglo1[1]>arreglo1[3] && arreglo1[1]>arreglo1[4] && arreglo1[1]>arreglo1[5]){
				mayor = arreglo1[1];
			}
			else if(arreglo1[2]>arreglo1[1] && arreglo1[2]>arreglo1[3] && arreglo1[2]>arreglo1[4] && arreglo1[2]>arreglo1[5]){
				mayor = arreglo1[2];
			}
			else if(arreglo1[3]>arreglo1[1] && arreglo1[3]>arreglo1[2] && arreglo1[3]>arreglo1[4] && arreglo1[3]>arreglo1[5]){
				mayor = arreglo1[3];
			}
			else if(arreglo1[4]>arreglo1[1] && arreglo1[4]>arreglo1[2] && arreglo1[4]>arreglo1[3] && arreglo1[4]>arreglo1[5]){
				mayor = arreglo1[4];
			}
			else if(arreglo1[5]>arreglo1[1] && arreglo1[5]>arreglo1[2] && arreglo1[5]>arreglo1[3] && arreglo1[5]>arreglo1[4]){
				mayor = arreglo1[5];
			}
			cout << "El numero mas grande es:" <<mayor <<endl;
			break;
		case 3: //promedio
			system("cls");
			cout<<"Ingresar 5 numeros para encontrar el promedio" <<endl;
			for (int i = 1; i < 6; i++) {
				cout << "Ingrese un numero en la posicion " 
					<< i << endl;
				cin>>arreglo[i];
			}
			resultado = arreglo[1]+arreglo[2]+arreglo[3]+arreglo[4]+arreglo[5];
			promedio = resultado/ suma;
			cout<<"El promedio es:"<<promedio <<endl;
			break;
		case 4://encontrar numero igual
			system("cls");
			cout<<"Ingresar 10 numeros diferentes" <<endl;
			for (int i = 1; i < 11; i++) {
				cout << "Ingrese un numero en la posicion " << i << endl;
				cin >> arreglo2[i];
			}
			
			cout<<"Ingresar un numero de la suerte:";
			cin>>numero1;
			for (int i = 1; i < 11; i++){
				if (numero1 == arreglo2[i]){
					cout << "Felicidades"<<endl;
					buscar = true;
				} 
			}
			if (!buscar){
				cout << "Mala suerte"<<endl;
			}
			break;
		default:
			cout<<"NO ES UNA DE LAS OPCIONES, INTENTE DE NUEVO"<<endl;
			break;
		}
		
	}
	
	return 0;
}
