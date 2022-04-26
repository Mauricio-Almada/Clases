#include <iostream>
#include "LocalComercial.h"
using namespace std;

void LocalComercial::cargar() {
	Inmueble::cargar();
	cout << "Ingrese tipo de zona (1: comercial; 2 mixta; 3 industrial): ";
	cin >> zona;
	while (zona < 1 || zona > 3) {
		cout << "Error. Ingrese datos nuevamente." << endl;
		cin >> zona;
	};
}

void LocalComercial::mostrar() {
	cout << "-------------------------" << endl;
	Inmueble::mostrar();
	cout << "Tipo de zona: " << endl;
	cin >> zona;
	switch (zona) {
	case 1:
		cout << "Comercial.";
		break;
	case 2:
		cout << "Mixta.";
		break;
	case 3:
		cout << "Inudstrial.";
		break;
	default:
		cout << "Error. Ingrese datos nuevamente.";
		break;
	}

}
