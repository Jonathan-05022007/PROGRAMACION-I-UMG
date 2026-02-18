#include<iostream>
using namespace std;

int main() {
	float aplicarporcentaje;//antes como:porcentaje
	float elaporte;//antes como:aporte
	float ingresaedad;//antes como:edad
	float ingresasueldo;//antes como:sueldo
	cout << "Ingrese la edad del empleado:" << endl;
	cin >> ingresaedad;
	cout << "Ingrese el sueldo anual en dólares:" << endl;
	cin >> ingresasueldo;
	if (ingresasueldo<10000) {
		aplicarporcentaje = 0.005;
		// 0.5%
	} else {
		if (ingresasueldo>=10000 && ingresasueldo<=19999) {
			aplicarporcentaje = 0.01;
			// 1%
		} else {
			if (ingresasueldo>=20000 && ingresasueldo<=29999) {
				aplicarporcentaje = 0.02;
				// 2%
			} else {
				aplicarporcentaje = 0.025;
				// 2.5%
			}
		}
	}
	elaporte = ingresasueldo*aplicarporcentaje;
	if (ingresaedad<=30) {
		elaporte = elaporte+(elaporte*0.20);
	}
	cout << "El monto del aporte al sindicato es: " << elaporte << " dólares." << endl;
	return 0;
}
