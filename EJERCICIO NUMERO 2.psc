Algoritmo NUMER0_DOZ
	
	
	x,c,f es real
	f=1
	c=0
	
	
	escribir "Por Favor Escriba un numero entero positivo"
	
	
	leer x
	
	
	si x>=0
		
		
		si x>0 
			
			si x>1
				
				
				
				
				repetir  
					
					c<-(c+1)
					
					si x>=c
						f<-c*f
					FinSi
					
				Hasta Que c=x 
				
				
			sino 
				
				f<-f
				
				
			FinSi
			
			
			
		SiNo
			
			f=1
			
		FinSi
		
		ESCRIBIR "Numero:" (x) " ,factorial:" (f)
		
	sino 
		
		escribir "porfavor escriba un numero entero, mayor o igual a cero"
		
		
	FinSi
	
	
	
	
	
FinAlgoritmo
