Proceso Clasificar_hora
	Definir hora Como Entero
    
    Escribir "Ingrese una hora del día (0 a 23):"
    Leer hora
    
    Si hora < 0 O hora > 23 Entonces
        Escribir "Error: La hora debe estar entre 0 y 23."
    Sino
        Si hora >= 0 Y hora <= 5 Entonces
            Escribir "Madrugada"
        Sino
            Si hora >= 6 Y hora <= 11 Entonces
                Escribir "Mañana"
            Sino
                Si hora >= 12 Y hora <= 13 Entonces
                    Escribir "Mediodía"
                Sino
                    Si hora >= 14 Y hora <= 19 Entonces
                        Escribir "Tarde"
                    Sino
                        Escribir "Noche"
                    FinSi
                FinSi
            FinSi
        FinSi
    FinSi
FinProceso
