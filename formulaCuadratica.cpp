#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double a, b, c, x1, x2, discriminante;
	cout<<"Ingrese el valor de A: ";
	cin>>a;
	cout<<"Ingrese el valor de B: ";
	cin>>b;
	cout<<"Ingrese el valor de C: ";
	cin>>c;
	discriminante=(pow(b,2)-4*a*c);
	if(a==0){
		cout<<"\nLa ecuacion no tiene solucion"<<endl;
	}
	else{
		if(discriminante>0){
			cout<<"\Hay dos soluciones reales y diferentes"<<endl;
			x1=-b+sqrt(discriminante)/2*a;
			x2=-b-sqrt(discriminante)/2*a;
			cout<<"x1= "<<x1<<endl;
			cout<<"x2= "<<x2<<endl;
		}
		else{
			if(discriminante==0){
				cout<<"\nHay una solucion real doble"<<endl;
				x1=-(b/(2*a));
				cout<<"x= "<<x1<<endl;
			}
			else{
				if(discriminante<0){
					double imag;
					double real;
				cout<<"\nHay dos soluciones complejas conjugadas"<<endl;
				
				real=((-b)/(2*a));
				imag=sqrt((-1*discriminante))/(2*a);
				
				cout<<"x1= "<<real<<" + "<<imag<<"i"<<endl;
				cout<<"x2= "<<real<<" - "<<imag<<"i"<<endl;
				}
			}		
		}
	}	
}
