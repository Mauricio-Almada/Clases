#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Direccion {
private:
	char calle[30], localidad[30], departamento;
	int numero, codPostal, piso;
public:
	void setCalle(const char* _calle) { strcpy(calle, _calle); };
	void setLocalidad(const char* _localidad) { strcpy(localidad, _localidad); };
	void setDepartamento(char _departamento) { departamento = _departamento; };
	void setNumero(int _numero) { numero = _numero; };
	void setCodPostal(int _codPostal) { codPostal = _codPostal; };
	void setPiso(int _piso) { piso = _piso; };

	const char* getCalle() { return calle; };
	const char* getLocalidad() { return localidad; };
	char getDepartamento() { return departamento; };
	int getNumero() { return numero; };
	int getCodPostal() { return codPostal; };
	int getPiso() { return piso; };

	void mostrar();
	void cargar();
};

