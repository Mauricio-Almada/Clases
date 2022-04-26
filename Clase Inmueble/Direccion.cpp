
#include "Direccion.h"
#include <iostream>
using namespace std;

void Direccion::cargar() {
	cout << "---INGRESE DIRECCION---" << endl;
	cout << "Calle: ";
	cin >> calle;
	cout << "Numero: ";
	cin >> numero;
	cout << "Cod. Postal: ";
	cin >> codPostal;
	cout << "Localidad: ";
	cin >> localidad;
	cout << "Piso: ";
	cin >> piso;
	cout << "Departamento: ";
	cout << departamento;
}

void Direccion::mostrar() {
	cout << "--------------------" << endl;
	cout << "---SU DIRECCION---" << endl;
	cout << "Calle: ";
	cout << calle << endl;
	cout << "Numero: ";
	cout << numero << endl;
	cout << "Cod. Postal: ";
	cout << codPostal << endl;
	cout << "Localidad: ";
	cout << localidad << endl;
	cout << "Piso: ";
	cout << piso << endl;
	cout << "Departamento: ";
	cout << departamento << endl;
}