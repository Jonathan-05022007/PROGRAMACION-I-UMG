#include<iostream>
using namespace std;

int main() {
	int hora;
	cout << "Ingrese una hora del día (0 a 23):" << endl;
	cin >> hora;
	if (hora<0 || hora>23) {
		cout << "Error: La hora debe estar entre 0 y 23." << endl;
	} else {
		if (hora>=0 && hora<=5) {
			cout << "Madrugada" << endl;
		} else {
			if (hora>=6 && hora<=11) {
				cout << "Mañana" << endl;
			} else {
				if (hora>=12 && hora<=13) {
					cout << "Mediodía" << endl;
				} else {
					if (hora>=14 && hora<=19) {
						cout << "Tarde" << endl;
					} else {
						cout << "Noche" << endl;
					}
				}
			}
		}
	}
	return 0;
}
