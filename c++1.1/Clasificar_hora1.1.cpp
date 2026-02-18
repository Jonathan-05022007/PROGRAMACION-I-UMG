#include<iostream>
using namespace std;

int main() {
	int nuevahora;//antes como:hora
	cout << "Ingrese una hora del día (0 a 23):" << endl;
	cin >> nuevahora;
	if (nuevahora<0 || nuevahora>23) {
		cout << "Error: La hora debe estar entre 0 y 23." << endl;
	} else {
		if (nuevahora>=0 && nuevahora<=5) {
			cout << "Madrugada" << endl;
		} else {
			if (nuevahora>=6 && nuevahora<=11) {
				cout << "Mañana" << endl;
			} else {
				if (nuevahora>=12 && nuevahora<=13) {
					cout << "Mediodía" << endl;
				} else {
					if (nuevahora>=14 && nuevahora<=19) {
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
