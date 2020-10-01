//		70.	sumar las filas y columnas 
#include <iostream>
using namespace std;
main(){
	int suma=0,suma1=0,suma2=0,suma3=0, matriz[4][5]={2,9,11, 0 ,1,12,4, 0 ,21,17,8, 0 ,2,39,5, 0 };
	cout<<endl<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(i==0){
				suma=matriz[i][j]+suma;
				if(matriz[i][j]==0){
						matriz[i][j]=suma;
						
					
				}
			}
			else{
				if(i==1){
				suma1=matriz[i][j]+suma1;	
					if(matriz[i][j]==0){
						matriz[i][j]=suma1;
					}	
				}
				else{
					if(i==2){
						suma2=matriz[i][j]+suma2;
							if(matriz[i][j]==0){
								matriz[i][j]=suma2;
							}	
					}
					else{
						if(i==3){
							suma3=matriz[i][j]+suma3;
							if(matriz[i][j]==0){
								matriz[i][j]=suma3;
							}
						}
						else{
							if(i==4){
								matriz[4][0]=matriz[0][0]+matriz[1][0]+matriz[2][0]+matriz[3][0];
								matriz[4][1]=matriz[0][1]+matriz[1][1]+matriz[2][1]+matriz[3][1];
								matriz[4][2]=matriz[0][2]+matriz[1][2]+matriz[2][2]+matriz[3][2];
								matriz[4][3]=matriz[4][0]+matriz[4][1]+matriz[4][2]+suma+suma1+suma2+suma3;
							}
						}
					}
				}
			}
			cout<<matriz[i][j]<<" ";
			
		}
	}
	system("PAUSE");
}
