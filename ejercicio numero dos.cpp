//Algoritmo Numero Dos

#include<iostream>
using namespace std;
int main()

{

	int long long x,c,f;
	f=1;c=0;
	
	cout<<"Por Favor Digite Un Numero Entero Positivo"<<endl;
	cin>>x;
	

	if (x>=0)
	{
		if (x>0)
		{
			if (x>1)
			{
			while(c<x)
			{
				
			c=c+1;
		
			if(x>=c)
			
			f=c*f;
			
			}
			}
		else	
		{
			
		f=f;
		
		}
		
		}
		else 
		{
			
		f=1;
		
		}
	
		cout<<"Numero="<<x<<endl;
		cout<<"Factorial="<<f<<endl;
	}
	else
	{
		cout<<x<<"; No es un numero entero entero positivo"<<endl;
		system("pause");
		return 0;
	}
	
	system("pause");
		return 0;}

	
	
