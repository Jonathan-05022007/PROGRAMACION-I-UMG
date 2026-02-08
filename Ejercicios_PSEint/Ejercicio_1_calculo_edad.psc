Proceso Ejercicio_1_calculo_edad
    Definir anio_actual, anio_nacimiento, edad Como Entero
    
    Escribir "Bienvenido al sistema de cálculo de edad :)"
    Escribir "Por favor, ingrese el año actual: "
    Leer anio_actual
    Escribir "Ingrese su año de nacimiento:"
    Leer anio_nacimiento
    
    edad <- anio_actual - anio_nacimiento
    
    Escribir "Usted tiene (o cumplirá este año): ", edad, " años."
FinProceso
