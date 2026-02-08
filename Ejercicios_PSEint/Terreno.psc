Proceso Terreno
	Definir ancho, largo, precio_m2, area, total_precio, perimetro, alambre Como Real

    Escribir "Ingrese el ancho del terreno (metros):"
    Leer ancho
    Escribir "Ingrese el largo del terreno (metros):"
    Leer largo
    Escribir "Ingrese el precio del metro cuadrado:"
    Leer precio_m2

    area <- ancho * largo
    total_precio <- area * precio_m2
    
    perimetro <- 2 * (ancho + largo)
    alambre <- perimetro * 3
   
    Escribir "El precio total del terreno es: Q", total_precio
    Escribir "La cantidad de alambre necesaria para 3 pasadas es: ", alambre, " metros."
FinProceso
