	//		94.
	#include <iostream>
	using namespace std;
	void mes(int a){
	switch(a){
		case 1:
			cout<<"El mes de Enero tiene 31 dias"<<endl;
			break;
		case 2:
			cout<<"El mes de Febrero tiene 28 dias"<<endl;
			break;
		case 3:
			cout<<"El mes de Marzo tiene 31 dias"<<endl;
			break;
		case 4:
			cout<<"El mes de Abril tiene 30 dias"<<endl;
			break;
		case 5:
			cout<<"El mes de Mayo tiene 31 dias"<<endl;
			break;
		case 6:
			cout<<"El mes de Junio tiene 30 dias"<<endl;
			break;
		case 7:
			cout<<"El mes de Julio tiene 31 dias"<<endl;
			break;
		case 8:
			cout<<"El mes de Agosto tiene 31 dias"<<endl;
			break;
		case 9:
			cout<<"El mes de Septiembre tiene 30 dias"<<endl;
			break;
		case 10:
			cout<<"El mes de Octubre tiene 31 dias"<<endl;
			break;
		case 11:
			cout<<"El mes de Noviembre tiene 30 dias"<<endl;
			break;
		case 12:
			cout<<"El mes de Diciembre tiene 31 dias"<<endl;
			break;
		default:
			cout<<"Opcion no valida ingrese un numero de 1 a 12"<<endl;
			break;
		}
		system("PAUSE");
	}
	
	int main(){
	int b;
	system("cls");
	cout<<"Dias del mes"<<" Ingrese un numero de mes: "<<endl;
	int z;
	cin>>z;
	mes(z);
	return 0;
	
	}
