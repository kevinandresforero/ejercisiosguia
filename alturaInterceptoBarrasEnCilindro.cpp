#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//Declaracion de variables
	double base, x;
	double varilla1, cateto1, pendiente1, y1;
	double varilla2, cateto2, pendiente2, y2;
	
	//Solicitud de datos
	cout<<"Ingrese la longitud de la base: ";
	cin>>base;//asigna a base el valor ingresado por teclado
	cout<<"Ingrese la longitud de la varilla A: ";
	cin>>varilla1;//asigna a varilla1 el valor ingresado por teclado
	cout<<"Ingrese la longitud de la varilla B: ";
	cin>>varilla2;//asigna a varilla2 el valor ingresado por teclado
	
	if (varilla1<base||varilla2<base){//evalua si alguna de las varillas es mas corta que la base, si lo es no se puede realizar la operacion
		cout<<"No se puede realizar la operacion. Alguna de las varillas son mas cortas que la base.";
	}else{//si las dos varillas son mas largas que la base realiza la operacion
	
		//Halla catetos
		cateto1=sqrt((pow(varilla1,2))-(pow(base,2)));//Halla la altura del extremo mas alto de la varilla 1-Teorema de Pitagoras.
		pendiente1=((-1)*cateto1)/base;//Halla la pendiente de la varilla 1, usando ecuacion de la pendiente.
		cout<<"Cateto 1: "<<cateto1<<endl;
		
		cateto2=sqrt((pow(varilla2,2))-(pow(base,2)));//Halla la altura del extremo mas alto de la varilla 2- Teorema de Pitagoras
		pendiente2=cateto2/base;//Halla la pendiente de la varilla 2, usando la ecuacion de la pendiente.
		cout<<"Cateto 2: "<<cateto2<<endl;

		//Halla valor de x e y en el intercepto de las varillas
		x=(cateto1*base)/(cateto1+cateto2);//Halla el valor de x en el intercepto de las dos varillas. (Se llega a la ecuacion igualando las dos ecuaciones-punto-pendiente de las varillas)
		y1=(pendiente1*x)+cateto1;//Reemplaza el valor de x en la ecuacion de la recta de la varilla 1 para encontrar la altura en el intercepto de las dos varillas
		y2=pendiente2*x;//Reemplaza el valor de x en la ecuacion de la recta de la varilla 2 para encontrar la altura en el intercepto de las dos varillas

		//Impresion de resultados
		cout<<"Intercepto de las rectas es x= "<<x<<endl;
		cout<<"Altura en el intercepto de las rectas y= "<<y1<<endl;
		cout<<"Altura en el intercepto de las rectas y2= "<<y2;
	}
	return 0;
}
