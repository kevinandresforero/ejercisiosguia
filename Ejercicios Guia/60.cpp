 //	60. tras asignar a un arreglo los numeros 25, 45, 68, 99, 10, 15 y 4. determine la posicion del arreglo en la que se encuentra el maximo valor.
 #include <iostream>
 using namespace std;
 main (){
 	cout<<"		-----60.-----		"<<endl;
 	cout<<"		"<<endl;
 	int arreglo [7] = {23, 45, 68, 99, 10, 15, 4}, h=0;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			if(arreglo[i]>h){
				h=arreglo[i];
			}
		}

	}
	cout<<h<<endl;
	cout<<"			"<<endl;
	system ("PAUSE");
 }
