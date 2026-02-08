Algoritmo cajeron
    Definir nombre Como Cadena
    Definir inicial, saldo, monto, promedio, minimo, maximo,comision Como Real
    Definir depositos_efectivo, depositos_cheque, cantidad_retiros Como Entero
    Definir decision, tipo Como Entero
	
    depositos_efectivo <- 0
    depositos_cheque <- 0
    cantidad_retiros <- 0
    promedio <- 0
    minimo <- 0
    maximo <- 0
	
    Escribir "Ingrese su nombre: "
    Leer nombre
    Escribir "Ingrese su saldo inicial: "
    Leer inicial
	
    saldo <- inicial
	
    Repetir
        Escribir "Usuario: ", nombre
        Escribir "Saldo actual: ", saldo
        Escribir "¿Qué movimiento desea hacer?"
        Escribir "1. Depositar"
        Escribir "2. Retirar"
        Escribir "0. Salir"
        Leer decision
		
        Si decision == 1 Entonces
            Escribir "Tipo de depósito:"
            Escribir "1. Efectivo"
            Escribir "2. Cheque (1% comisión)"
            Leer tipo
			
            Si tipo == 1 Entonces
                Escribir "Ingrese el monto a depositar: "
                Leer monto
				
                saldo <- saldo + monto
                depositos_efectivo <- depositos_efectivo + 1
				
                Si minimo == 0 O monto < minimo Entonces
                    minimo <- monto
                FinSi
				
            Sino
                Si tipo == 2 Entonces
                    Escribir "Ingrese el monto a depositar: "
                    Leer monto
					
                    comision <- monto * 0.01
                    saldo <- saldo + (monto - comision)
                    depositos_cheque <- depositos_cheque + 1
					
                    Si minimo == 0 O monto < minimo Entonces
                        minimo <- monto
                    FinSi
                FinSi
            FinSi
        FinSi
		
        Si decision == 2 Entonces
            Escribir "Ingrese el monto a retirar: "
            Leer monto
			
            Si monto <= saldo Entonces
                saldo <- saldo - monto
                cantidad_retiros <- cantidad_retiros + 1
                promedio <- promedio + monto
				
                Si monto > maximo Entonces
                    maximo <- monto
                FinSi
            Sino
                Escribir "Saldo insuficiente."
            FinSi
        FinSi
		
    Hasta Que decision == 0
	
    Si cantidad_retiros > 0 Entonces
        promedio <- promedio / cantidad_retiros
    FinSi
	
    Escribir "a) Nombre: ", nombre
    Escribir "b) Saldo inicial: ", inicial
    Escribir "c) Saldo final: ", saldo
    Escribir "d) Depósitos:"
    Escribir "   - Efectivo: ", depositos_efectivo
    Escribir "   - Cheque: ", depositos_cheque
    Escribir "e) Promedio de retiros: ", promedio
    Escribir "f) Depósito mínimo: ", minimo
    Escribir "   Retiro máximo: ", maximo
	
FinAlgoritmo
