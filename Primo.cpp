#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingresa un número, por favor:";
	int num, conta = 0;
	cin>>num;
	
	for(int a=1; a<=num; a++){
		if(num%a==0)
		conta++;
	}
	if(conta<=2)
	cout <<num <<"es primo"<<endl;
	else
		cout<<num <<"no es primo"<<endl;
	return 0;
}

