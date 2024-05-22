#include <iostream>
#include <string>
#include <ctime>
using namespace std;



int main(int argc, char *argv[]) {
	string juga1;
	string juga2;
	int sim;
	int i = 1;
	
	while(i ==1){
	cout<<"Ingrese el nombre del jugador 1:"<<endl;
	cin>>juga1;
	cout<<"Que simbolo desea? 1.X 2.O" <<endl;
	cin>>sim;
	cout<<"Ingrese el nombre del jugador 2:"<<endl;
	cin>>juga2;
	
	char totito[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	for (int j=0; j <3; j++){
		for (int k=0; k <3; k++){
			cout<<totito[j][k];
		}
		cout<<endl;
	}
	// Obtener la hora actual como semilla
	unsigned int semilla_actual = static_cast<unsigned int>(time(0));
	srand(semilla_actual);
	
	// Tirar el dado (generar un número aleatorio entre 1 y 6)
	int resultado = 1 + rand() % 6;
	
	cout << "Resultado del dado: " << resultado << endl;
	
	if(resultado%2 == 0){
		cout<<"Le toca empezar a X"<<endl;
	}
	else{
		cout<<"Le toca empezar a O";
	}
	}
	
	return 0;
}

