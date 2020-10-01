//	62.	Tras asignar 10 # leidos en un arreglo, Determine las posiciones en las que se encantra el maximo y el minimo
#include <iostream>
using namespace std;
int main (){
	cout<<		"-----62-----"		<<endl;
	int arreglo[10], mayor=0, menor=0;
	
	for(int i=0;i<10;i++){
		cin>>arreglo[i];
	}			
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				if(arreglo[i]>mayor){
					mayor=i;
				}
			}
		}
			for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				if(arreglo[i]<menor){
					menor=i;
				}
			}
		}
	
		cout<<"	Mayor:	"<<mayor<<endl;
		cout<<"	Menor:	"<<menor<<endl;	

system("PAUSE");
return 0;
system("PAUSE");
}
