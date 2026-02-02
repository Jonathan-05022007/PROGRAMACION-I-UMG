Algoritmo Formula_masa
	Definir c1 Como Real
	Definir c2 Como Real
	Definir presion Como Real
	Definir volumen Como Real
	Definir temperatura Como Real
	Definir masa Como Real
	
	c1<-0.37
	c2<-460
	
	Escribir 'Ingresa la presion: '
	Leer presion
	Escribir 'Ingresa el volumen: '
	Leer volumen
	Escribir 'Ingresa la temperatura: '
	Leer temperatura
	
	masa<-(presion*volumen)/(c1*temperatura*c2)
	
	Escribir 'La masa resultante es: ',masa
FinAlgoritmo