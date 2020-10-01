//									CUADRO MAGICO
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int azar();

int main(){
	int matriz [3][3];
	int r,c=0,x=1;
	bool b, a=true;
	while (a==true);{
		b==true;
		c=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				matriz [i][j]=0;
			}
		}
	}
	matriz[1][1]=5;
	while (b==true){
		r=azar();
		if(c==0){
			matriz[0][c]=r;
			c=2;
		}
		else{
			if(matriz[0][0]!=r){
				if(matriz[0][0]==2 && r!=8){
					matriz [0][c]=r;
					b=false;
				}
				else{
					if(matriz[0][0]==8 && r!=2){
						matriz[0][c]=r;
						b=false;
					}
					else{
						if(matriz[0][0]==4 && r!=6){
							matriz[0][c]=r;
							b=false;
						}
						else{
							if(matriz[0][0]==6 && r!=4){
								matriz[0][c]=r;
								b=false;
							}
						}
					}
				}
			}
		}
	}
	matriz[2][0]=15-matriz[0][2]+matriz[1][1];
	matriz[2][2]=15-matriz[0][0]+matriz[1][1];
	matriz[0][1]=15-matriz[0][0]+matriz[0][2];
	matriz[1][0]=15-matriz[0][0]+matriz[2][0];
	matriz[1][2]=15-matriz[1][0]+matriz[1][1];
	matriz[2][1]=15-matriz[0][1]+matriz[1][1];
	cout<<"		---- CUADRO MAGICO -----		"<<endl;
	for(int i=0;i<0;i++){
		for(int j=0;j<0;j++){
			cout<<matriz[i][j]<<" "<<endl;
		}
	}
	cout<<"	"<<endl;
	system ("PAUSE");
	return 0;
}
int azar(){
	int r;
	srand(time(0));
		r=1+rand() % ((9+1)-1);
		return (r);
}
