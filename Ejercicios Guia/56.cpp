	//	56. escribir un arreglo con 5 enteros consecutivos y hacer una copia de ese arrglo en otro
#include <iostream>
#include <stdlib.h>
#include <time.h>
int azar, vector[5],copia[5];
main(){
	srand(time(NULL));
	azar=(-100)+rand()%(220-1);
	printf("\n\n El arreglo	\n\n");
	for(int i=0;i<5;i++){
		vector[i]=azar;
		copia[i]=vector[i];
		printf("\t %d",vector[i]);
		azar++;
	}
	printf("\n\n La copia \n\n");
	for(int i=0;i<5;i++){
		printf("\t %d",	copia[i]);
	}	printf("\n\n");
	system("PAUSE");
}
