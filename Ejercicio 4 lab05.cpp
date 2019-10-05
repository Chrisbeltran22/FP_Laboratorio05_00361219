#include <iostream>

using namespace std;

int repeticiones; //n
int numeros; //x
int resultado; //y
int media; //z

int main(void){
	cout<<"Ingrese cantidad de veces a realizar la operacion\n";
	cin>>repeticiones;
	cout<<"Ingrese datos a operar"<<endl;
		cin>>numeros; //Se piden los números a operar.
		cout<<endl;
	for(int i=1; i<=repeticiones;i++){ //Se inicializa para funcinar según la cantidad de datos a operar
		
		repeticiones= numeros + 1; //Se hace la suma de los números ingresados.
		resultado= repeticiones + numeros; 		
		
	}
	
	cout<<"Esto es "<<media;
	media= (resultado / repeticiones);
	cout<<media;
	
  //al valor final del ciclo for.
}
