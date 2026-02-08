Proceso Billetes
	Definir monto, b100, b50, b20, b10, b5, b2, b1 Como Entero
    
    Escribir "Ingrese el monto en dólares (entero):"
    Leer monto
    
    b100 <- Trunc(monto / 100)
    monto <- monto MOD 100
    
    b50 <- Trunc(monto / 50)
    monto <- monto MOD 50
    
    b20 <- Trunc(monto / 20)
    monto <- monto MOD 20
    
    b10 <- Trunc(monto / 10)
    monto <- monto MOD 10
    
    b5 <- Trunc(monto / 5)
    monto <- monto MOD 5
    
    b2 <- Trunc(monto / 2)
    monto <- monto MOD 2
    
    b1 <- monto 
    
    Escribir b100, " billete de U$S 100"
    Escribir b50, " billetes de U$S 50"
    Escribir b20, " billetes de U$S 20"
    Escribir b10, " billetes de U$S 10"
    Escribir b5, " billete de U$S 5"
    Escribir b2, " billete de U$S 2"
    Escribir b1, " billetes de U$S 1"
FinProceso
