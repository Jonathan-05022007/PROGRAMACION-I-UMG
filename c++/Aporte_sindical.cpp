#include<iostream>
using namespace std;

int main() {
	float aporte;
	float edad;
	float porcentaje;
	float sueldo;
	cout << "Ingrese la edad del empleado:" << endl;
	cin >> edad;
	cout << "Ingrese el sueldo anual en dólares:" << endl;
	cin >> sueldo;
	if (sueldo<10000) {
		porcentaje = 0.005;
		// 0.5%
	} else {
		if (sueldo>=10000 && sueldo<=19999) {
			porcentaje = 0.01;
			// 1%
		} else {
			if (sueldo>=20000 && sueldo<=29999) {
				porcentaje = 0.02;
				// 2%
			} else {
				porcentaje = 0.025;
				// 2.5%
			}
		}
	}
	aporte = sueldo*porcentaje;
	if (edad<=30) {
		aporte = aporte+(aporte*0.20);
	}
	cout << "El monto del aporte al sindicato es: " << aporte << " dólares." << endl;
	return 0;
}
