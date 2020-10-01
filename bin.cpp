 
#include<iostream>
#include<cstdlib>
using namespace std;
 
int binario(int n){
    if(n>1)      binario(n/2);
    cout<<n%2;
	}
int main( void ){
 
    int nro;
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" EJERCICIO 2: Convertir a binario un numero decimal "<<endl<<endl;
 
    do{
            cout<<" INGRESE NUMERO: ";
            cin>>nro;
            if(nro<0) cout<<"  INGRESE UN NUMERO ENTERO Y POSITIVO...   ";
    }while(nro<0);
    cout<<endl;
    cout<<"\n Numero:"<<nro<<endl;
    cout<<"\n Binario:"<<endl;
    binario(nro);
 
    return 0;
}
