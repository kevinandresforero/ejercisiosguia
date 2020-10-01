Algoritmo Tres
	
	definir a,b,MCM,cma,cmb,cmd como entero 
	
	
	escribir "Digite dos numeros enteros positivos"
	leer a
	leer b
	
	da<-a
	db<-b
	si a>b
		si da%db=0
			MCD<-db
			
		SiNo
			
			hacer 
				da=(da%db)
				c=(ad%db)
			Hasta Que c=0
			MCD<-da
		FinSi
		
	SiNo
		si db%da=0
			MCD<-da
			
		SiNo
			Hacer
				da=db%da
				c=db%da
				
			Hasta Que c=0
			MCD<-da
		FinSi
	FinSi
	
	MCM<-(a*b)/MCD
	
	escribir "el mcm y mcd de" 
	escribir a " Y " b 
	escribir "MCM= " MCM
	escribir "MCD=" MCD
	
FinAlgoritmo
