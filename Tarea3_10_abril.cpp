#include <iostream>
using namespace std;

int accion(int numero){
	int resultado;
	int num;
	
	cout<<"Que accion desea realizar?"<<endl;
	cout<<"1. Multiplos del numero"<<endl;
	cout<<"2. Factorial del numero"<<endl;
	cout<<"3. Fibonacci del numero"<<endl;
	cin>>num;
	
	if(num==1){//multiplos
		for(int i = 0; i<10; i++){
			cout<<"El numero "<< numero * i <<" es multiplo de "<<numero<<endl;
		}
	}
	
	else if(num == 2){//factorial
		int fac = 1;
		for(int a=numero; a>0; a--){
			fac=fac*a;
		}
		cout<<"Resultado:"<<fac<<endl;
	}
	
	else if(num==3){//fibonacci
		int fib=0, a=0, b=1, c=1;
		cout<<"Que fibonacci desea:";
		cin>>fib;
		for(int i=0; i<fib; i++){
			c = a + b;
			cout<<c<<""<<endl;
			a=b;
			b=c;
		}
	}
	
	return resultado;
}

void mostrarmensaje(){
	cout<<"Ingrese un numero porfavor para operar";
}
int main(int argc, char *argv[]) {
	//Crear un programa que solicite un numero y una acción. Las acciones enviadas a una funcion
	//accion1: buscar los multiplos. accion2: calcular el factorial del numero. accion3: fibonacci.
	int num;
	mostrarmensaje();
	cin>>num;
	
	int resultado = accion(num);
	
	return 0;
}

