//	llenar un arreglo con numeros pares entre 1 y 100
#include <iostream>
using namespace std;
main(){
	cout<<"	---Un arreglo con numeros pares entre 1 y 100---	"<<endl;
	int vector[49],y=1,par=0;
	cout<<""<<endl;
	for(int y=1;y<100;y++){
		if((y%2)==0){
			par++;
			vector[par]=y;
			cout<<vector[par]<<", ";
		}
	}
	cout<<""<<endl;
	system ("pause");
}
