#pragma once
#include "Fecha.h"
#include "Direccion.h"
#include <iostream>
using namespace std;

class Inmueble {
protected:
	Direccion domicilio;
	Fecha fechaIngreso;
	Fecha fechaOperacion;
	float supfTotal;
	int operacion;
public:
	void setDomicilio(Direccion _domicilio) { domicilio = _domicilio; };
	void setFechaIngreso(Fecha _fechaIngreso) { fechaIngreso = _fechaIngreso; };
	void setFechaOperacion(Fecha _fechaOperacion) { fechaOperacion = _fechaOperacion; };
	void setSupfTotal(float _supfTotal) { supfTotal = _supfTotal; };
	void setOperacion(int _operacion) { operacion = _operacion; };

	Direccion getDomicilio() { return domicilio; };
	Fecha getFechaIngreso() { return fechaIngreso; };
	Fecha setFechaOperacion() { return fechaOperacion; };
	float getSupfTotal() { return supfTotal; };
	int getOperacion() { return operacion; };

	void cargar();
	void mostrar();

};