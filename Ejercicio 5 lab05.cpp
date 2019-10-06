#include <iostream>

using namespace std;
int n=0;
int suma, resta;
int mult, div;
int fact;
int fibo, digF=0, y=1, z=1;
int dig1, dig2;


int main(){
	do{
	cout<<"***INGRESE UNA OPCION***"<<endl;
		cout<<"1-Suma de dos numeros"<<endl;
		cout<<"2-Resta de dos numeros"<<endl;
		cout<<"3-Multiplicacion de dos numeros"<<endl;
		cout<<"4-Division de dos numeros"<<endl;
		cout<<"5-Fibonacci de un numero"<<endl;
		cout<<"6-Factorial de un numero"<<endl;
		cout<<"7-salir"<<endl;
		cout<<endl;
		cin>>n;	cout<<"Ha seleccionado "<<n<<endl;
		
		switch(n){
				case 1: //Proceso Sumatoria
					cout<<endl<<"Ingrese dos digitos a operar enm sumatoria"<<endl;
					cin>>dig1;
					cin>>dig2;
					suma= dig1 + dig2;
					cout<<endl<<"La respuesta es "<<suma<<endl;
				break;
				
				case 2: //Proceso Resta
					cout<<endl<<"Ingrese dos digitos a operar en resta"<<endl;
					cin>>dig1;
					cin>>dig2;
					resta= dig1 - dig2;
					cout<<endl<<"La respuesta es "<<resta<<endl;
				break;
				
				case 3: //Proceso Multiplicación
					cout<<endl<<"Ingrese dos digitos a operar en multiplicacion"<<endl;
					cin>>dig1;
					cin>>dig2;
					mult= dig1 * dig2;
					cout<<endl<<"La respuesta es "<<mult<<endl;
				break;		
					
				case 4: //Proceso división
					cout<<endl<<"Ingrese dos digitos a operar en division"<<endl;
					cin>>dig1;
					cin>>dig2;
					div= dig1 % dig2;
					cout<<endl<<"La respuesta es "<<div<<endl;
				break;
					
				case 5: //Serie Fibonacci
					cout<<endl<<"Ingrese el digito a operar en proceso Fibonacci"<<endl;
					cin>>dig1;
					cout<<endl<<"0\n1\n";
						for(int i=1; i<=dig1; i++){
							z= digF + y;
							cout<<z<<endl;
							digF = y;
							y = z;	
						}
					cout<<endl;	
					break;	
					
				case 6: //Factorial de un número
					cout<<endl<<"Ingrese el digito a operar factorialmente"<<endl;
					cin>>dig1;
					if (dig1 < 0) y = 0;
					else if (dig1 == 0) y = 1;
					else{
						for (int i = 1; i <= dig1; i++){
							y = y*i;
						}
						
						cout<<endl<<"Factorial de "<<y<<endl;
						
					}
					break;
			}
	}				
	
	
	while(n!=7); //Proceso de cierre o finalización de programa				
	cout<<"Gracias por usar nuestra Calculadora Pro Master 2000\nHave a nice day";				
}
	



