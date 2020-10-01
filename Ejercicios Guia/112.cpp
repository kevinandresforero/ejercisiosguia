	//		112.
	#include <iostream>
	#include <time.h>
	#include <stdlib.h>
	using namespace std;
	
using namespace std;

int main(){
system("clear");
int a[2][3],b[2][4],c[2][5],x,fijas,picas,num;
cout<<" PICAS Y FIJAS"<<"Ingrese su opcion de juego"<<" 1 - Juego de 3 digitos (facil)"<<" 2 - Juego de 4 digitos (Medio)"<<" 3 - Juego de 5 digitos (Dificil)"<<x;
switch(x){
case 1:
srand(time(0));
for (int i=0;i<3;i++){ num=rand()%10){
for (int j=0;j<<"Ingrese cada digito seguido de un enter"<>a[1][j];
}
for (int x=0;x<3;x++){ fijas= cout<<"Ud tiene una puntuacion de: "<<10-h<<" h="10;" g="0;g<3;g++){cout<<"Usted tiene "<<< fijas <<< picas<<<"Has perdido!!!!!"<<<"El numero era: "; for (int l=0;l<3;l++){ cout<<num;){
for (int j=0;j<<"Ingrese cada digito seguido de un enter"<>b[1][j];
}
for (int x=0;x<4;x++){ fijas=" " cout<<"Ud tiene una puntuacion de: "<<15-h<<" h="15;" g="0;g<4;g++){for="" int="" y="0;y<4;y++){" if="" cout=""><<"Usted tiene "<<<" fijas y "<<<" picas"<<<"Has perdido!!!!!"<<<"El numero era: "; for (int l=0;l<4;l++){ cout=""><0){
for (int j=0;j<<"Ingrese cada digito seguido de un enter"<>c[1][j];
}
for (int x=0;x<5;x++){ fijas="=">
cout<<"Ud tiene una puntuacion de: "<<20-h<<endl;
h=20;
}
}
for (int g=0;g<5;g++){ y="0;y<5;y++){"><<" fijas y "<<<" picas"<
if (h==19){
cout<<"Has perdido!!!!!"<
cout<<"El numero era: "; for (int l=0;l<5;l++){>
}
}
cout<
}
break;
default:
cout<<"Opcion no valida!!!"<
break;
}
return 0;
} 
