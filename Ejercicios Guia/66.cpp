//	66. MULTIPLICAR POR 2 LA MATRIZ
#include <iostream>
using namespace std;
main(){
	cout<<endl<<"		---66---		"<<endl<<endl;
	int matriz[3][3]={5,6,13,14,2,4,21,7,6};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<"  ";
		}
	}
	cout<<endl<<endl<<"		Y EL DOBLE..."<<endl<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]*2<<"  ";
		}
	}	
	system ("PAUSE");
}
