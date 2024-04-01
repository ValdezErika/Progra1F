#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Serie de fibonacci
	int num=0;
	for(int a=1; a<40;){
		num= num +a;
		a= a+num;
		cout<<"El fibonacci es:"<<num <<endl <<"El fibonacci es:"<<a <<endl;
	}
	return 0;
}

