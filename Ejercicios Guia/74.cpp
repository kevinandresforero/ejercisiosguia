	//		74. Escribir un programa que genera la inversa de una cadena de caracteres. La cadena original y la invertida deben almacenarse en arreglos independientes.
	#include <iostream>
	using namespace std;
	int main(int argc, char *argv[])
	{
		char cad[30];
		char cadinv[30];	
		cout<<"inversion de cadena de caracteres"<<endl;
		cout<<"ingrese una palabra o frase"<<endl;
		cin.getline(cad,30);
		char longitud=cad[30];
		cout<<"cadena inversa"<<endl;
		for (int i=0, j=longitud-1; i<longitud/2; i++,j--){
			cout<<cad[j]<<endl;
		}
	  system("PAUSE"); 
	  return 0;
	}
