	//	58. llenar un arreglo con los 20 primeros numeros pares y calcule su suma
#include <iostream>
using namespace std;
int main(){
	int par=0, suma=0, arreglo[20];
		cout<<"	Los primeros 20 pares son: "<<endl;	
		cout<<"	 "<<endl;
		for(int i=1;i<41;i++){
			if(((i%2)==0) && (par<20)){
				par++;
				suma=suma+i;
				arreglo[i]=i;
				cout<<arreglo[i]<<" ";
			}
		}
	cout<<"	suma= "<<suma<<endl;	
	cout<<" "<<endl;
	return 0;
	system("PAUSE");
}
