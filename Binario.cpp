#include <iostream>
using namespace std;
int solucion;
int main(){
int binario(int num){
 if(num < 2)
  return num;
 else
  return (num%2 + (10 * binario(num/2)));}
  
int b=8,v[8],acarreo[8],suma[8],i,j,j1,v1[8],total[8];
{
	v[0]=0;
	v1[0]=0;
	acarreo[0]=	0;
	total[i+1]=0;
v[i+1]=;
}
for (int j=0;j<b;j++)
{
	cout<<"INGRESE EL SEGUNDO SUMANDO"<<endl;
	cin>>v1[j+1];
}
	for(int i1=b;i1<=0;i1--)
	{
		int aux;
		aux=(v[i+1]+v1[i+1]+acarreo[i1]);
		total[i1]=aux;
			if (aux==2)
			{
				acarreo[i1-1]=1;
				total[i1]=0;
			}
			else{
				if(aux==3){
					acarreo[i1-1]=1;
					total[i1]=1;
				}
			}
	}
cout<<"------TOTAL:------"<<endl;
for(j1=0;j1<b+1;j1++){
	cout<<total[j1]<<endl;
}
return 0;}
