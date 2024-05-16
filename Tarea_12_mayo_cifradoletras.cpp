#include <iostream>
#include <string>
using namespace std;

string cifrar(const string & cadena){
	string resultado = cadena;
	int longitud = resultado.length();
	
	for(int i=0; i < longitud; i++){
		char caracter = resultado[i];
		if(caracter == 'a' || caracter == 'A'){
			resultado [i] = '4';
		}
		
		if(caracter == 'e' || caracter == 'E'){
			resultado [i] = '3';
		}
		
		if(caracter == 'i' || caracter == 'I'){
			resultado [i] = '1';
		}
		
		if(caracter == 'o' || caracter == 'O'){
			resultado [i] = '0';
		}
		
		if(caracter == 'u' || caracter == 'U'){
			resultado [i] = '*';
		}
	}
	return resultado;
}

int main(int argc, char *argv[]) {
	string frase, fraseCifrada;
	cout <<"Ingrese una frase para cifrarla"<<endl;
	
	getline (cin, frase);
	fraseCifrada = cifrar(frase);
	
	cout <<endl << "Frase cifrada"<<endl <<fraseCifrada;
	return 0;
}

