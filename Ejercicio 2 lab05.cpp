#include <iostream>
#include <stdlib.h>

using namespace std;

int i;
int valor1=0, valor2=1, valor3=1;
int numero;

int main(void){
	cout<<"Introduzca valor a operar"<<endl;
	cin>>numero;
	cout<<endl;
	
	if(numero >=1){
	
	cout<<"0\n1\n";
	for(i=1; i<numero; i++) { //Se inicializa el for para usarlo el n�mero de veces que nosotros queramos seg�n el dato num�rico que le damos.
		
		valor3= valor1 + valor2; //Se hace la suma del valor1 + valor2 para conocer el primer valor de la serie y aumentar el valor de valor3.
		valor1 = valor2; //Valor1 ser� igual a valor2 para que este aumente su valor al momento de repetir la sentencia for las veces indicadas.
		valor2 = valor3; //Valor2 ser� igual a valor3 para aumentar su valor al realizar nuevamente la sentecia for hasta realizarla las veces indicadas.
		
		cout<<valor3<<endl; //Se mostrar�n los resultados de valor3 seg�n las veces que se realiz� el programa.
	}
}
	if(numero == 0){ //Si el n�mero ingresado es cero la funci�n acaba aqu�.
		cout<<numero;
		
	}

}
