#pragma once
#include <iostream>
#include "Inmueble.h"
using namespace std;

class Terrenos :
    public Inmueble {
private:
    char mejoras;

    void setMejoras(char _mejoras) { mejoras = _mejoras; };

    char getMejoras() { return mejoras; };

    void cargar();
    void mostrar();

};
