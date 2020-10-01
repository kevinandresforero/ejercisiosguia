//Ejercicio Número 5

#include <iostream>
using namespace std;
int main()
{
{
	int actual,l,anterior,i,x,n;
	double cons;
	
	cout<<"Escriba el n-nesimo termino de la sarie de Fibonacci que quiere analizar"<<endl;
	cin>>x;
	actual=1;
	anterior=0;
	i=0;
	n=1;
	l=0;
{
		
if (x>2){
	
		while(l<x)
		{
		n=anterior;
		anterior=actual;
		actual=anterior+n;
		l++;
		}
		cout<<"El valor "<<x<<" de la serie de Fibonacci es: "<<anterior<<endl;
	
}
	else
	{
	if(x<0){
	cout<<"Escriba el numero entero positivo de la serie de Fibonacci que desea encontrar"<<endl;}
	else
		if(n=1){
		cout<<"El valor "<<x<<" de la serie de Fibonacci es: "<<n<<endl;
		}
	}
	
}
{
}
}
}
