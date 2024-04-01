#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout<<"Ingrese un número, por favor:";
	cin>>num;
	int num2 = 0;
	int suma = 0;
	
	if (num%2==0){
		while(num2<=num){
			if(num2%2==0)
			suma+=num2;
			num2++;
		}
		
		cout<<"El resultado es:" << suma <<endl;
	}
	else{
		while(num2<=num){
			if(num2%2!=0)
				suma+=num2;
			num2++;
		}
		
		cout<<"El resultado es:" << suma <<endl;
	}

	return 0;
}

