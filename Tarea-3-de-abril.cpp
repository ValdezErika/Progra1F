#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Ejecicio de Switch case
	int num1=0;
	cout<<"PORFAVOR INGRESE SU SEMESTRE:";
	cin>>num1;
	
	switch(num1){
		case 1:
			cout<<"Area común";
			break;
	case 3:
		cout<<"Area comun";
		break;
	case 5:
		cout<<"Area especifica";
		break;
	case 7:
		cout<<"Area especifica";
		break;
	default:
		cout<<"No nos encontramos en ese semestre.";
		break;
	}
	return 0;
}

