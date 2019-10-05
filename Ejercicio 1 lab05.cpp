#include <iostream>

using namespace std;

int main(void){
	int valor = 1;
	int i;
	int numero;
	
	cout<<"Ingrese un numero a realizar factorizacion"<<endl;
	cin>>numero;
	
	if (numero < 0) valor = 0;
	else if (numero == 0) valor = 1;
	else{
		for (int i = 1; i <= numero; i++){
			valor = valor*i;
		}
		
	}
	
	cout<<"Factorial de "<<valor;
	return 0;
}
