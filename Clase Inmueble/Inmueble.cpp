#include "Inmueble.h"
#include <iostream>
using namespace std;

void Inmueble::cargar() {
	cout << "---INGRESE DATOS---: " << endl;
	cout << "Direccion: " << endl;
	domicilio.cargar();
	cout << "Fecha de ingreso: " << endl;
	fechaIngreso.cargar();
	cout << "Fecha de operacion: " << endl;
	fechaOperacion.cargar();
	cout << "Superficie total: " << endl;
	cin >> supfTotal;
	cout << "Tipo de operacion (1: venta; 2: alquiler): " << endl;
	cin >> operacion;
	while (operacion < 1 || operacion > 2) {
		cout << "Error. Ingrese operacion nuevamente.";
		cin >> operacion;
	};
}

void Inmueble::mostrar() {
	cout << "--------------------" << endl;
	cout << "---SUS DATOS---: " << endl;
	cout << "Direccion: " << endl;
	domicilio.cargar();
	cout << "Fecha de ingreso: " << endl;
	fechaIngreso.cargar();
	cout << "Fecha de operacion: " << endl;
	fechaOperacion.cargar();
	cout << "Superficie total: " << endl;
	cin >> supfTotal;
	cout << "Tipo de operacion (1: venta; 2: alquiler): " << endl;
	cin >> operacion;
}