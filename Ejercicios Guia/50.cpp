//	Escribir un programa que calcule independinetemente, la suma y la medida de los números pares e impatres entre 1 y 200.

#include <iostream>
using namespace std;
 main(){
 	int par=0, impar=0, sumapar=0, sumaimpar=0, aux;
	 	for(int l=1;l<200;l++){
	 		if((l%2)!=0){
	 			impar++;
	 			aux=l;
	 			sumaimpar=l+aux;
			 }
			 else{
			 	par++;
			 	aux=l;
				sumapar=l+aux;
				}
		 }
	cout<<"	"<<endl;	
	cout<<"		--Entre el 1 y el 200--		"<<endl;
	cout<<"	"<<endl;
	cout<<" La cantidad de numeros pares es "<<par<<" ; y la suma de los pares es: "<<sumapar<<endl;
	cout<<" la cantidad de los impares es "<<impar<<" ; y la suma de los impares es: "<<sumaimpar<<endl;
	cout<<"	"<<endl;
	system("PAUSE");
	return 0;
 }
