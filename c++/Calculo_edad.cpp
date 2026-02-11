#include<iostream>
using namespace std;

int main() {
	int anio_actual;
	int anio_nacimiento;
	int edad;
	cout << "Bienvenido al sistema de cálculo de edad :)" << endl;
	cout << "Por favor, ingrese el año actual: " << endl;
	cin >> anio_actual;
	cout << "Ingrese su año de nacimiento:" << endl;
	cin >> anio_nacimiento;
	edad = anio_actual-anio_nacimiento;
	cout << "Usted tiene (o cumplirá este año): " << edad << " años." << endl;
	return 0;
}
