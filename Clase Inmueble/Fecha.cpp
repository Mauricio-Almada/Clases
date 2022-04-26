#include <iostream>
#include "Fecha.h"
using namespace std;

void Fecha::cargar() {
    cout << "Ingrese el dia: ";
    cin >> dia;
    setDia(dia);
    cout << "Ingrese el mes: ";
    cin >> mes;
    setMes(mes);
    cout << "Ingrese el anio: ";
    cin >> anio;
    setAnio(anio);
}

void Fecha::mostrar() {
    cout << "--------------------" << endl;
    cout << "Fecha";
    if (dia < 10) {
        cout << '0' << dia << '/';
    }
    else {
        cout << dia << '/';
    }
    if (mes < 10) {
        cout << '0' << mes << '/' << anio;
    }
    else {
        cout << mes << '/' << anio;
    }
}
