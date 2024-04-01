#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Serie de fibonacci
	int fib=0, a=0, b=1, c=1;
	cout<<"Que fibonacci desea:";
		cin>>fib;
	for(int i=0; i<fib; i++){
		c = a + b;
		cout<<c<<""<<endl;
		a=b;
		b=c;
	}
	return 0;
}

