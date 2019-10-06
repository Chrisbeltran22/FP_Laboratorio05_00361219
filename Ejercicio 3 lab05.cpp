#include <iostream>

using namespace std;

int repeticiones; //n
float numeros; //x
int resultado = 0; //y
int media; //z

int main(void){
	cout<<"Ingrese cantidad de veces a realizar la operacion\n";
	cin>>repeticiones;

	for(int i=1; i<=repeticiones;i++){ //Se inicializa para funcinar según la cantidad de datos a operar
		
		cout<<"Ingrese datos a operar\n";
		cin>>numeros; //Se piden los números a operar.
		cout<<endl;
		resultado += numeros; //Se hace la suma de los números ingresados.
		
	}
	
	cout<<"Esto es "<<media;
	media= (resultado/repeticiones);
	cout<<media;

}
