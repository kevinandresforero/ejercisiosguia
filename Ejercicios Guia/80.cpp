#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
char cad[30];
char cop[30];


for(int i=0;i<30;i++)
    {
        cad[i]='\0';
        cop[i]='\0';
    }

cout << "Ingrese una cadena de texto:";
cin.getline(cad,30);

for(int i=0;i<30;i++)
{
    if(cad[i]!='\0')
        {
            if(i%2==0)
                {
                    cop[i]=cad[i]+2;
                }
            else
                {
                
                    cop[i]=cad[i]+3;
                }
        }
}

cout << "la cadena : " <<"	";
cout << "fue encriptada en : ";
  system("PAUSE"); 
  return 0;
}
