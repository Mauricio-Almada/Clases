#include "Departamento.h"
#include <iostream>
using namespace std;

void Departamento::cargar() {
	Inmueble::cargar();
	cout << "Ingrese cantidad de ambientes: ";
	cin >> cantAmbientes;
	cout << "Instalaciones complementarias (0 - No tiene; 1 - tiene): ";
	cin >> instalacionesComp;
	while (instalacionesComp < 0 && instalacionesComp > 1) {
		cout << "Error. Ingrese datos nuevamente." << endl;
		cin >> instalacionesComp;
	};
}

void Departamento::mostrar() {
	cout << "-------------------------" << endl;
	cout << "SUS INGRESOS FUERON: " << endl;
	Inmueble::mostrar();
	cout << endl;
	cout << "Cantidad de ambientes: ";
	cout << cantAmbientes << endl;
	if (instalacionesComp == 1) {
		cout << "Tiene instalaciones complementarias." << endl;
	}
	else {
		cout << "No tiene instalaciones complementarias." << endl;
	}
}

