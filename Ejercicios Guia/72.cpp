	//		72.
#include <iostream>
using namespace std;

  const int T=100;
int main(int argc, char *argv[])
{
  
  int arr[T];
  int modulo,cont,x=1;
  cout<<"	Numeros primos entre 1 y 100	"<<endl;
  for(int n=0;n<100;n++)
  {
    arr[n]=x++;
  }
    
    cout<<endl<<endl;
  for(int n=0;n<100;n++)
    {
    cont=0;
      for(int i=1;i<=arr[n];i++)
        {
          modulo=arr[n]%i;
          
          if(modulo==0)
           {
             cont=cont+1;
           }
        }
      if(cont<=2)
         cout<<arr[n]<<" ";
    }        
  system("PAUSE"); 
  return 0;
}
