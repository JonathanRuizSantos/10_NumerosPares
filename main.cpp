#include <iostream>

/* Suma de numeros pares entre 1 y 100*/

using namespace std;
int main(int argc, char** argv) {
	cout<<"Programa que hace la suma de todos los pares entre 1 y 100"<<endl<<"Forma 1"<<endl<<endl;
	int par = 0;
	
	for(int i = 2; i <= 100; i++){
		if(i % 2 == 0)
			par +=i;
	} 
	
	cout<<endl;
	cout<<"La suma de todos los pares: "<<par<<endl<<endl;
	
	system("PAUSE");
	return 0;
}