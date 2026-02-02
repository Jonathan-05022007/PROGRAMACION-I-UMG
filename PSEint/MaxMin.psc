Proceso MaxMin
	Definir N Como Entero
	Definir max Como Entero
	Definir min Como Entero
	Definir valor Como Entero
	Definir i Como Entero
	
	Escribir 'Cuantos numeros desea ingresar: '
	Leer N
	i=1
	Mientras i <= N Hacer
		Escribir 'Ingrese un valor: '
		Leer valor
		
		si i=1 Entonces
			min<-valor
			max<-valor
		SiNo
			si valor<min Entonces
				min=valor
			FinSi
			si valor<max Entonces
				max=valor
			FinSi
		FinSi
		
		i<-i+1;
	FinMientras
	
	Escribir 'El valor Máximo es: ',max
	Escribir 'El valor Mínimo es: ',min
FinProceso
