#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	
	int menu;
	double ad;
	double opuesto;
	double hipo;
	int numero;
	double angulo;
	int fac = 1;
	
	while (menu != 5 )
	{
		cout<<"Que desea hacer?"<<endl;
		cout<<"1) Calcular la hipotenusa de un triangulo"<<endl;
		cout<<"2) Calcular el angulo de un triangulo"<<endl;
		cout<<"3) Calcular el factorial de un numero"<<endl;
		cout<<"4) Calcular el vuelto de una compra"<<endl;
		cout<<"5) Salir"<<endl;
		cin>>menu;
		
		switch (menu)
		{
		case 1://Hipotenusa c'2=a'2 + b'2
			system("cls");
			cout<<"Calcular la hipotenusa de un triangulo"<<endl;
			cout<<"Ingrese el lado opuesto:"<<endl;
			cin>>opuesto;
			cout<<"Ingrese el lado del adyacente:"<<endl;
			cin>>ad;
			
			hipo = ((opuesto*opuesto)+(ad*ad));
			hipo = sqrt(hipo);
			
			cout<<"La hipotenusa del triangulo es:"<<hipo <<endl;
			break;
			
		case 2://angulo de un triangulo
			system("cls");
			cout<<"Calcular el angulo de un triangulo"<<endl;
			cout<<"Ingrese el angulo del lado opuesto:"<<endl;
			cin>>opuesto;
			cout<<"Ingrese el angulo del lado del adyacente:"<<endl;
			cin>>ad;
			
			if(angulo <= 180){
				angulo = 180-(opuesto+ad);
				cout<<"El angulo es:"<<angulo <<endl;
			}
			break;
			
		case 3://factoria
			system("cls");
			cout<<"Calcular el factorial de un número"<<endl;
			cout<<"Ingrese un número para averiguar su factorial:";
			cin>>numero;
			
			for(int a=numero; a>0; a--){
				fac=fac*a;
				cout << "el valor ahora es" <<fac<<endl;
			}
			break;
			
		case 4: //Vuelto
			system("cls");
			double vuelto;
			double billete; 
			double gasto;
			
			cout<<"Calcular el vuelto de una compra"<<endl;
			cout<<"Ingrese con cuanto pago:"<<endl;
			cin>>billete;
			cout<<"Ingrese cuanto gasto en total:"<<endl;
			cin>>gasto;
			
			if(billete >= gasto){
				vuelto = billete-gasto;
				cout<<"Su vuelto es:"<<vuelto<<endl;
			} 
			else{
				cout<<"El dinero es insuficiente para pagar"<<endl;
			}
			break;
			
		default:
			cout<<"Salir del programa";
			break;
		}
	}
	return 0;
}


