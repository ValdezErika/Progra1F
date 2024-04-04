#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Crear un menú de una calculadora. Ejecutar toda la lógica de la operación (suma, resta, multiplicación, división)
	//Al final de la operación, preguntar si quiere volver a ejecutar el menú completo.
	
	int num, num1, menu, sum,resta, multi, divi, cal=1;
	
	do{
		cout<<"Ingrese un numero:";
		cin>>num;
		
		cout<<"Ingrese otro numero:";
		cin>>num1;
		
		cout<<"¿Que operación desea realizar?"<<endl;
		cout<<"1.Suma"<<endl;
		cout<<"2.Resta"<<endl;
		cout<<"3.Multiplicacion"<<endl;
		cout<<"4.Division"<<endl;
		cin>>menu;
		
		if(menu==1){sum=num+num1;
		cout<<"La suma es:"<<sum;
		}
		else if (menu==2){resta=num-num1;
		cout<<"La resta es:"<<resta;
		}
		else if (menu==3){multi=num*num1;
		cout<<"La multiplicacion es:"<<multi;
		}
		else if(menu==4){divi=num/num1;
		cout<<"La division es:"<<divi;
		}
		else {
			cout<<"Valor incorrecto";
		}
		cout<< endl <<"¿Desea volver a ejecutar el menú completo? 1. Si 2.No";
		cin>>cal;
	} while (cal == 1);
	cout<<"Salimos del ciclo";
	return 0;
}

