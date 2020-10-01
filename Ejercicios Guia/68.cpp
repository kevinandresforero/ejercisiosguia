//		68.	sumar los datos de cada columna de la matriz y almacenar los resultados en la última posicion de cada columna
#include <iostream>
using namespace std;
main(){
	int suma2=0, suma=0, matriz [2][5]={5,6,7,9,0,11,8,2,15,0};
	cout<<"	-----68-----	"<<endl;
	cout<<endl<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			if(i==0){
				if(matriz[i][j]==0){
						matriz[i][j]=suma;
						suma=matriz[i][j]+suma;
					
				}
			}
			else{
				suma2=matriz[i][j]+suma2;
				if(matriz[i][j]==0){
						matriz[i][j]=suma2;
				}
			}
			suma=matriz[i][j]+suma;
			if(i==0){
				cout<<" "<<matriz[i][j]<<"	";}
		}
	}
		cout<<endl<<endl;
		for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
				if(i==1){
					cout<<" "<<matriz[i][j]<<"	";
				}
			}
		}
	system("PAUSE");
}
