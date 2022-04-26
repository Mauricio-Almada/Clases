
#pragma once
#include "Inmueble.h"
class Casa :
    public Inmueble {
private:
    int cantAmbientes;
    float supfConstruida;

    void setCantAmbientes(int _cantAmbientes) { cantAmbientes = _cantAmbientes; };
    void setSupfConstruida(float _SupfConstruida) { supfConstruida = _SupfConstruida; };

    int getCantAmbientes() { return cantAmbientes; };
    float getSupfConstruida() { return supfConstruida; };

    void cargar();
    void mostrar();
};


