//CDT intereses

#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
int  ndp=0 , pdo=0 , n=0;
long int cap=0 , vf=0;
long double ia=0 , mas=0;
cout<<"Ingrese el capital total del CTD"<<endl;
cin>>cap;
cout<<"Ingrese el interes nominal anual"<<endl;
cin>>ia;
	cout<<"Menu de periodos que ofrece el banco para CDTs"<<endl;
	cout<<" 1 Anual"<<endl;
	cout<<" 2 Semestral"<<endl;
	cout<<" 3 Trimestral"<<endl;
	cout<<" 4 Mensual"<<endl;
	cout<<"Escoja entre estas opciones y escriba el numero segun corresponda el periodo"<<endl;
	cin>>pdo;
	cout<<"Cuantos periodos va a ingresar el capital?"<<endl;
	cin>>n;

switch( pdo ) {
	case 1 :
		vf=cap*(pow((1+ia),(n)));
	case 2 :
		vf=cap*(pow((1+ia/2),(n))); 
	case 3 :
		vf=cap*(pow((1+ia/4),(n)));
	case 4 : 
		vf=cap*(pow((1+ia/12),(n)));
			  }

cout<<"Al ingresar "<<cap<<" al CDT, se obtiene: "<<vf<<" capital"<<endl;
cout<<"con una tasa de interes del "<<ia<<" durante "<<n<<" periodos."<<endl;
	mas=vf-cap;
	
if(vf>cap)
	cout<<"con el CDT gano "<<mas<<" capital"<<endl;
else
	cout<<"Deve "<<mas<<" capital"<<endl;
	}
