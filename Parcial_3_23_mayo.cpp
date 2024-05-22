#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void ImprimirTotito(char totito[3][3]){
	for (int j=0; j <3; j++){
		for (int k=0; k <3; k++){
			cout<<totito[j][k];
			if(k != 2){
				cout<<" | ";
			}
		}
		if(j != 2){
			cout<<endl<<"---------";
		}
		cout<<endl;
	}
}
	
int Ganadores(char totito[3][3], int sim){
	int i;
		//validar filas
	for(i =0; i < 3; i++){
		if((totito[i][0] == totito[i][1]) && (totito[i][0] == totito[i][2])){
			if (totito[i][0] == 'X'){
				if (sim == 1){
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (totito[i][0] == 'O'){
					if (sim == 2){
						return 1;
					}
					else
					{
						return 2;
					}
				}
			}
		}
		//validar columnas
		for(i =0; i < 3; i++){
			if((totito[0][i] == totito[1][i]) && (totito[0][i] == totito[2][i])){
				if (totito[0][i] == 'X'){
					if (sim == 1){
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (totito[0][i] == 'O'){
					if (sim == 2){
						return 1;
					}
					else
					{
						return 2;
					}
				}
			}
		}
		if((totito[0][0] == totito[1][1]) && (totito[0][0] == totito[2][2])){
			if (totito[0][0] == 'X'){
				if (sim == 1){
					return 1;
				}
				else
				{
					return 2;
				}
			}
			if (totito[0][0] == 'O'){
				if (sim == 2){
					return 1;
				}
				else
				{
					return 2;
				}
			}
		}
	if((totito[2][0] == totito[1][1]) && (totito[2][0] == totito[0][2])){
			if (totito[2][0] == 'X'){
				if (sim == 1){
					return 1;
				}
				else
				{
					return 2;
				}
			}
			if (totito[2][0] == 'O'){
				if (sim == 2){
					return 1;
				}
				else
				{
					return 2;
				}
			}
		}
	return 0;
}


int main(int argc, char *argv[]) {
	string juga1;
	string juga2;
	int sim;
	int i = 1;
	int movimiento;
	char simbolo;
	int ganador = 0;
	
	while(i ==1){
	system("cls");
	cout<<"Ingrese el nombre del jugador 1:"<<endl;
	cin>>juga1;
	cout<<"Que simbolo desea? 1.X 2.O" <<endl;
	cin>>sim;
	cout<<"Ingrese el nombre del jugador 2:"<<endl;
	cin>>juga2;
	
	char totito[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	int turno = 0;

	// Obtener la hora actual como semilla
	unsigned int semilla_actual = static_cast<unsigned int>(time(0));
	srand(semilla_actual);
	
	// Tirar el dado (generar un número aleatorio entre 1 y 6)
	int resultado = 1 + rand() % 6;
	
	cout << "Resultado del dado: " << resultado << endl;
	
	if(resultado%2 == 0){
		cout<<"Le toca empezar a X"<<endl;
		while(turno < 9){
			if(turno%2==0)
			{
				simbolo = 'X';
				if(sim==1){
					cout << "Turno de X: "<< juga1 << endl;
				}
				else{
					cout << "Turno de X: "<< juga2 <<  endl;
				}
			}
			else{
				simbolo = 'O';
				if(sim==1){
					cout << "Turno de O: "<< juga2 << endl;
				}
				else{
					cout << "Turno de O: "<< juga1 <<  endl;
				}
			}
			
			ImprimirTotito(totito);
			
			cout << "En que posicion desea jugar: " << endl;
			cin>>movimiento;
			
			turno++;
			
			switch(movimiento){
			case 1:
				if(totito[0][0] == '1'){
					totito[0][0] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					turno--;
				}
				break;
			case 2:
				if(totito[0][1] == '2'){
					totito[0][1] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 3:
				if(totito[0][2] == '3'){
					totito[0][2] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 4:
				if(totito[1][0] == '4'){
					totito[1][0] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 5:
				if(totito[1][1] == '5'){
					totito[1][1] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 6:
				if(totito[1][2] == '6'){
					totito[1][2] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 7:
				if(totito[2][0] == '7'){
					totito[2][0] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 8:
				if(totito[2][1] == '8'){
					totito[2][1] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 9:
				if(totito[2][2] == '9'){
					totito[2][2] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			default:
				cout <<" Movimiento no permitido" << endl;
				break;     
			}
			cout << endl;
			system("cls");
			ganador = Ganadores(totito, sim);
			if(ganador != 0){
				turno = 9;
			ImprimirTotito(totito);
			}
		}
	}
	
	else{
		cout<<"Le toca empezar a O"<<endl;
		while(turno < 9){
			if(turno%2==0)
			{
				simbolo = 'O';
				if(sim==1){
					cout << "Turno de O: "<< juga2 << endl;
				}
				else{
					cout << "Turno de O: "<< juga1 <<  endl;
				}
			}
			else{
				simbolo = 'X';
				if(sim==1){
					cout << "Turno de X: "<< juga1 << endl;
				}
				else{
					cout << "Turno de X: "<< juga2 <<  endl;
				}
			}
			
			ImprimirTotito(totito);
			
			cout << "En que posicion desea jugar: " << endl;
			cin>>movimiento;
			
			turno++;
			
			switch(movimiento){
			case 1:
				if(totito[0][0] == '1'){
					totito[0][0] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					//system pause
					system("pause");
					turno--;
				}
				break;
			case 2:
				if(totito[0][1] == '2'){
					totito[0][1] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 3:
				if(totito[0][2] == '3'){
					totito[0][2] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 4:
				if(totito[1][0] == '4'){
					totito[1][0] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 5:
				if(totito[1][1] == '5'){
					totito[1][1] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 6:
				if(totito[1][2] == '6'){
					totito[1][2] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 7:
				if(totito[2][0] == '7'){
					totito[2][0] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 8:
				if(totito[2][1] == '8'){
					totito[2][1] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			case 9:
				if(totito[2][2] == '9'){
					totito[2][2] = simbolo;
				}
				else
				{
					cout << "Posicion ya en uso." << endl;
					system("pause");
					
					turno--;
				}
				break;
			default:
				cout <<" Movimiento no permitido" << endl;
				turno--;
				break;     
			}
			cout << endl;
			system("cls");
			ganador = Ganadores(totito, sim);
			if(ganador != 0){
				turno = 9;
			}
		}
	}
	ImprimirTotito(totito);
	if (ganador == 0)
	{
		cout << endl << "Hubo un empate" << endl;
	}
	else if (ganador == 1)
	{
		cout << endl << "Gano: "<< juga1 <<  endl;
	} else if (ganador == 2)
	{
		cout << endl << "Gano: "<< juga2 <<  endl;
	}
	system("pause");
	cout << "Desea jugar de nuevo?  1. Si  2. No" << endl;
	cin >> i;
	}
	
}

