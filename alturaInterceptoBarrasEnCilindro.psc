Algoritmo alturaInterceptoBarrasEnCilindro
	//Ingreso de datos
	Escribir "Ingrese la longitud de la base: "
	Leer base
	Escribir "Ingrese la longitud de la varilla A: "
	Leer varilla1
	Escribir "Ingrese la longitud de la varilla B: "
	Leer varilla2
	//Comprueba que la longitud de cada varilla sea mayor a la de la base
	Si varilla1<base O varilla2<base Entonces
		Escribir "No se puede realizar la operacion. La longitud de las varillas debe ser mayor a la de la base"
	SiNo
		//Calcula la altura en el intercepto de las varillas
		cateto1=rc((varilla1^2)-(base^2))//Halla la altura del extremo mas alto de la varilla 1-Teorema de Pitagoras
		pendiente1=((-1)*cateto1)/base//Halla la pendiente de la varilla 1, usando ecuacion de la pendiente
		cateto2=rc((varilla2^2)-(base^2))//Halla la altura del extremo mas alto de la varilla 2- Teorema de Pitagoras
		pendiente2=cateto2/base//Halla la pendiente de la varilla 2, usando la ecuacion de la pendiente.
		x=(cateto1*base)/(cateto1+cateto2)//Halla el valor de x en el intercepto de las dos varillas. Se llega a la ecuacion igualando las dos ecuaciones-punto-pendiente de las varillas
		y1=(pendiente1*x)+cateto1//Reemplaza el valor de x en la ecuacion de la recta de la varilla 1 para encontrar la altura en el intercepto de las dos varillas
		//Impresion de resultados
		Escribir "Longitud de la varilla A= ",varilla1
		Escribir "Longitud de la varilla B= ",varilla2
		Escribir "Altura en el intercepto de las varillas h= ",y1
	Fin Si
FinAlgoritmo
