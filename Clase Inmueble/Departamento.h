#pragma once
#include "Inmueble.h"
class Departamento :
    public Inmueble {
private:
    int cantAmbientes;
    bool instalacionesComp;

    void setCantAmbientes(int _cantAmbientes) { cantAmbientes = _cantAmbientes; };
    void setInstalacionesComp(bool _instalacionesComp) { _instalacionesComp = false; };

    int getCantAmbientes() { return cantAmbientes; };
    bool getInstalacionesComp() { return instalacionesComp; };

    void cargar();
    void mostrar();
};

