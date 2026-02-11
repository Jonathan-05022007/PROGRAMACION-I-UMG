#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int b1;
	int b10;
	int b100;
	int b2;
	int b20;
	int b5;
	int b50;
	int monto;
	cout << "Ingrese el monto en dólares (entero):" << endl;
	cin >> monto;
	b100 = int(monto/100);
	monto = monto%100;
	b50 = int(monto/50);
	monto = monto%50;
	b20 = int(monto/20);
	monto = monto%20;
	b10 = int(monto/10);
	monto = monto%10;
	b5 = int(monto/5);
	monto = monto%5;
	b2 = int(monto/2);
	monto = monto%2;
	b1 = monto;
	cout << b100 << " billete de U$S 100" << endl;
	cout << b50 << " billetes de U$S 50" << endl;
	cout << b20 << " billetes de U$S 20" << endl;
	cout << b10 << " billetes de U$S 10" << endl;
	cout << b5 << " billete de U$S 5" << endl;
	cout << b2 << " billete de U$S 2" << endl;
	cout << b1 << " billetes de U$S 1" << endl;
	return 0;
}
