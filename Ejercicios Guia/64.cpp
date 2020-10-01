//	64. Determinar el valor maximo de la matriz//
//	32	56	50
//	49	99	12
//	78	57	89
#include <iostream>
using namespace std;
main(){
	cout<<" ---64--- "<<endl;
	int filas,columnas,h=0, matriz[3][3]={32 ,56, 50, 49, 99, 12, 78, 57, 89};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if((matriz[i][j]>h)){
				h=matriz[i][j];
				filas=i;
				columnas=j;
			}
		}

	}
	cout<<endl<<"	"<<filas<<" , "<<columnas<<"	"<<endl<<endl;
	system ("PAUSE");
}
