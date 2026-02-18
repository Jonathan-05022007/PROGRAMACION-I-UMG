#include<iostream>
using namespace std;

int main() {
	float num1;
	float num2;
	int opc;
	float resultado;
	cout << "--- CALCULADORA ---" << endl;
	cout << "Ingresa el primer número:" << endl;
	cin >> num1;
	cout << "Ingresa el segundo número:" << endl;
	cin >> num2;
	cout << "" << endl;
	cout << "Selecciona una operación:" << endl;
	cout << "1: Suma (+)" << endl;
	cout << "2: Resta (-)" << endl;
	cout << "3: Multiplicación (*)" << endl;
	cout << "4: División (/)" << endl;
	cin >> opc;
	switch (opc) {
	case 1:
		resultado = num1+num2;
		cout << "El resultado de la suma es: " << resultado << endl;
		break;
	case 2:
		resultado = num1-num2;
		cout << "El resultado de la resta es: " << resultado << endl;
		break;
	case 3:
		resultado = num1*num2;
		cout << "El resultado de la multiplicación es: " << resultado << endl;
		break;
	case 4:
		if (num2!=0) {
			resultado = num1/num2;
			cout << "El resultado de la división es: " << resultado << endl;
		} else {
			cout << "Error: No se puede dividir entre cero." << endl;
		}
		break;
	default:
		cout << "Opción no válida. Inténtalo de nuevo." << endl;
	}
	cout << "" << endl;
	cout << "¡Gracias por usar la calculadora!" << endl;
	return 0;
}
