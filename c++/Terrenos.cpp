#include<iostream>
using namespace std;

int main() {
	float alambre;
	float ancho;
	float area;
	float largo;
	float perimetro;
	float precio_m2;
	float total_precio;
	cout << "Ingrese el ancho del terreno (metros):" << endl;
	cin >> ancho;
	cout << "Ingrese el largo del terreno (metros):" << endl;
	cin >> largo;
	cout << "Ingrese el precio del metro cuadrado:" << endl;
	cin >> precio_m2;
	area = ancho*largo;
	total_precio = area*precio_m2;
	perimetro = 2*(ancho+largo);
	alambre = perimetro*3;
	cout << "El precio total del terreno es: Q" << total_precio << endl;
	cout << "La cantidad de alambre necesaria para 3 pasadas es: " << alambre << " metros." << endl;
	return 0;
}
