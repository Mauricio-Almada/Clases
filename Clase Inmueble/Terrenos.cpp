#include <iostream>
#include "Terrenos.h"
using namespace std;

void Terrenos::cargar() {
	Inmueble::cargar();
	cout << "Ingrese tipo de mejoras (‘A’: sin mejoras; ‘B’: asfalto; ‘C’: todos los servicios): ";
	cin >> mejoras;
	while (mejoras != 'A' || mejoras != 'B' || mejoras != 'C') {
		cout << "Error. Ingrese dato nuevamente." << endl;
		cin >> mejoras;
	};
}

void Terrenos::mostrar() {
	cout << "-------------------------" << endl;
	Inmueble::mostrar();
	cout << "Mejoras: ";
	cin >> mejoras;
	switch (mejoras) {
	case 'A':
		cout << "Sin mejoras.";
		break;
	case 'B':
		cout << "Asfalto.";
		break;
	case 'C':
		cout << "Todos los servicios.";
		break;
	default:
		cout << "Error. Ingrese dato nuevamente.";
		break;
	}
}