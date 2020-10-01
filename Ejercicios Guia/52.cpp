//	Leer 10 datos desde el teclado y sumar negativos
#include <iostream>
using namespace std;
int main(){
	int x,suma=0, neg=0,vector[10];
	for(int y=0;y<10;y++){
		cout<<"	Digite un numero"<<endl;
		cin>>x;
		if(x<0){
			vector[y]=x;
			suma=suma+vector[y];
			neg++;
		}
	}
	cout<<" la suma de los "<<neg<<" numeros negativos es: "<<suma<<endl;
	cout<<""<<endl;
	system("PAUSE");
	return 0;
	}
