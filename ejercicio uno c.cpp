//PROGRAMA_CONTEO_NUMEROS                                                 //https://www.programarya.com/Cursos/C++/Sistema-de-Tipos/Tipos-Primitivos
//toda linea cierra con ;
	
#include<iostream>                                                        //Abrir libreria
using namespace std;
int main()                                                                //int = entero _ main = funcion principal (parametros) _ std = activar entrada y salida de datos con formato
{                                                                         // {} = cuerpo de la funcion
int n,i=0,num=0,pos=0,neg=0,zero=0;                                                   //int = números enteros                                                    //darle valores o definir
cout<<"Digite la cantidad total de numeros a analizar"<<endl;              //cout<<"" = exportar _ 
cin>>n;                                                                    //cin>>"" = leer _ 

while(i<n)
{
cout<<"Digite un numero a analizar"<<endl;
cin>>num;                                                                 //cin = entrada o leer
if(num<0){
	    cout<<"Es negativo"<<endl;
		neg++;                                                   
}
else                                                              
{if(num>0)
	{
		cout<<"Es positivo"<<endl;
		pos++;
	}
	else
	{	cout<<"Es cero"<<endl;
		zero++;
	}	
}
i++;}


cout<<"la cantidad total de numeros positivos es:"<<pos<<endl;
cout<<"la cantidad total de numeros negativos es:"<<neg<<endl;
cout<<"la cantidad total de numeros que son cero es:"<<zero<<endl;
system("pause");
return 0;

}

//fin programa

