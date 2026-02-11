// Este codigo ha sido generado por el modulo psexport 20230113-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float acumretiro;
	int contador1;
	int contador2;
	int contretiro;
	float desc;
	float final;
	float inicial;
	float maxretirado;
	float mindeposito;
	float monto;
	string nombre;
	float promretiro;
	char respuesta;
	int tipo;
	mindeposito = -1;
	maxretirado = -1;
	promretiro = 0;
	acumretiro = 0;
	contretiro = 0;
	contador1 = 0;
	contador2 = 0;
	cout << "Ingrese su nombre" << endl;
	cin >> nombre;
	cout << "Ingrese saldo inicial" << endl;
	cin >> inicial;
	final = inicial;
	do {
		cout << "Seleccione" << endl;
		cout << "[D] Deposito" << endl;
		cout << "[R] Retiro " << endl;
		cout << "[F] Fin" << endl;
		cin >> respuesta;
		switch (respuesta) {
		case 'D':
			cout << "Tipo: " << endl;
			cout << "[1] Efectivo" << endl;
			cout << "[2] Cheque" << endl;
			cin >> tipo;
			cout << "Ingrese la cantidad a depositar:" << endl;
			cin >> monto;
			if (mindeposito==-1) {
				mindeposito = monto;
			}
			if (monto<mindeposito) {
				mindeposito = monto;
			}
			desc = 0;
			if (tipo==1) {
				contador1 = contador1+1;
			} else {
				desc = monto*0.01;
				contador2 = contador2+1;
			}
			final = final+monto-desc;
			cout << "Comision: " << desc << endl;
			cout << "**********************************" << endl;
			cout << "Su nuevo saldo es: " << final << endl;
			cout << "**********************************" << endl;
			break;
		case 'R':
			cout << "Ingrese el monto a retirar" << endl;
			cin >> monto;
			if (monto<=final) {
				final = final-monto;
				acumretiro = acumretiro+monto;
				contretiro = contretiro+1;
				if (maxretirado==-1) {
					maxretirado = monto;
				}
				if (monto>maxretirado) {
					maxretirado = monto;
				}
			} else {
				cout << "Sobregiro" << endl;
			}
			cout << "**********************************" << endl;
			cout << "Su nuevo saldo es: " << final << endl;
			cout << "**********************************" << endl;
			break;
		default:
			cout << "Opcion incorrecta" << endl;
		}
	} while (respuesta!='F');
	promretiro = acumretiro/contretiro;
	cout << "Nombre: " << nombre << endl;
	cout << "Saldo inicial: " << inicial << endl;
	cout << "Saldo final: " << final << endl;
	cout << "N° de depositos en efectivo: " << contador1 << endl;
	cout << "N° de depositios en cheque: " << contador2 << endl;
	cout << "El monto minimo depositado fue: " << mindeposito << endl;
	cout << "Promedio de retiro es: " << promretiro << endl;
	cout << "El monto maximo retirado fue: " << maxretirado << endl;
	return 0;
}
