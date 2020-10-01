	//		84. Escribir un programa que compare dos arreglos de caracteres y nos diga si son idénticos o no.

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
  char cad1[30];
  char cad2[30];
  
  for(int i=0;i<30;i++)
    {
        cad1[i]='\0';
        cad2[i]='\0';
    }
    
    cout<<"ingrese la cadena de texto 1:"<<endl;
    cin.getline(cad1,30);
    
    cout<<"ingrese la cadena de texto 2:"<<endl;
    cin.getline(cad2,30);
    
  int igual=0;
  
  for(int i=0;i<30;i++)
    {
        if(strcmp(cad1,cad2)==0) 
        {
            igual=1;
        }
    }
    if(igual==1)
    cout<<"la cadena  "<<" y la cadena "<<" son identicas"<<endl;
    if(igual==0)
    cout<<"las cadenas no son identicas"<<endl;
  system("PAUSE"); 
  return 0;
}
