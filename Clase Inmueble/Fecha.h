#pragma once
#include <iostream>
#include "Fecha.h"
using namespace std;

class Fecha {
private:
    int dia;
    int mes;
    int anio;
public:
    void setDia(int _dia) { if (_dia > 0 && _dia < 31)dia = _dia; };
    void setMes(int _mes) { if (_mes > 0 && mes > 13)mes = _mes; };
    void setAnio(int _anio) { anio = _anio; };
    int getDia() { return dia; };
    int getMes() { return mes; };
    int getAnio() { return anio; };
    void cargar();
    void mostrar();
};
