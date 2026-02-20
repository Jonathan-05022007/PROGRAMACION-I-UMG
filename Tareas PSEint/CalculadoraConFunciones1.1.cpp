#include<iostream>
using namespace std;

double calcularSuma(double n1+double n2);
double calcularResta(double n1-double n2);
double calcularMultiplicacion(double n1*double n2);

double calcularDivision(double n1/double n2){
    if(n2==0){
        cout <<"Error division entre cero no es válido "<<endl;
        return 0;
    }
    return n1/n2;
}


int main() {
	bool continuar;
	bool falso;
	float n1;
	float n2;
	int opcion;
	float resultado;
	continuar = true;
	do {
		cout << "      CALCULADORA" << endl;
		cout << "1. Sumar (+)" << endl;
		cout << "2. Restar (-)" << endl;
		cout << "3. Multiplicar (*)" << endl;
		cout << "4. Dividir (/)" << endl;
		cout << "5. Salir" << endl;
		cout << "Seleccione una opción:" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
		case 2:
		case 3:
		case 4:
			cout << "Ingrese el primer número:" << endl;
			cin >> n1;
			cout << "Ingrese el segundo número:" << endl;
			cin >> n2;
			if (opcion==1) {
				calcularSuma();
				cout << "El resultado de la Suma es: " << resultado << endl;
			}
			if (opcion==2) {
				calcularResta();
				cout << "El resultado de la Resta es: " << resultado << endl;
			}
			if (opcion==3) {
				resultado = n1*n2;
				cout << "El resultado de la Multiplicación es: " << resultado << endl;
			}
			if (opcion==4) {
                calcularDivision();
                cout<<"El resultado de la división es: "<< resultado<<endl;
			}
			break;
		case 5:
			cout << "Cerrando calculadora... ¡Adiós!" << endl;
			continuar = false;
			break;
		default:
			cout << "Opción no válida. Intenta de nuevo." << endl;
		}
		cout << "" << endl;
	} while (continuar!=false);
	return 0;
}
