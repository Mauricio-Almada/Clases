#pragma once
#include <iostream>
#include "Inmueble.h"
using namespace std;

class LocalComercial :
    public Inmueble {
private:
    int zona;

    void setZona(int _zona) { zona = _zona; };

    int getZona() { return zona; };

    void cargar();
    void mostrar();

};
