Proceso Aporte_sindical
	Definir edad, sueldo, aporte, porcentaje Como Real
    
    Escribir "Ingrese la edad del empleado:"
    Leer edad
    Escribir "Ingrese el sueldo anual en dólares:"
    Leer sueldo
    
    Si sueldo < 10000 Entonces
        porcentaje <- 0.005 // 0.5%
    Sino
        Si sueldo >= 10000 Y sueldo <= 19999 Entonces
            porcentaje <- 0.01 // 1%
        Sino
            Si sueldo >= 20000 Y sueldo <= 29999 Entonces
                porcentaje <- 0.02 // 2%
            Sino
                porcentaje <- 0.025 // 2.5%
            FinSi
        FinSi
    FinSi
    
    aporte <- sueldo * porcentaje
    
    Si edad <= 30 Entonces
        aporte <- aporte + (aporte * 0.20)
    FinSi
    
    Escribir "El monto del aporte al sindicato es: ", aporte, " dólares."
FinProceso
