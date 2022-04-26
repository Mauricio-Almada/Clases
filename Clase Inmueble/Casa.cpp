#include "Casa.h"
#include <iostream>
using namespace std;

void Casa::cargar() {
	Inmueble::cargar();//TRAIGO LA CARGA DE INMUEBLE.
	cout << "Ingrese cantidad de ambientes: ";
	cin >> cantAmbientes;
	cout << "Ingrese superficie construida: ";
	cin >> supfConstruida;
}

void Casa::mostrar() {
	cout << "-------------------------" << endl;
	cout << "SUS INGRESOS FUERON: " << endl;
	Inmueble::mostrar();
	cout << endl;
	cout << "Cantidad de ambientes: ";
	cout << cantAmbientes << endl;
	cout << "Superficie construida: ";
	cout << supfConstruida << endl;
}
