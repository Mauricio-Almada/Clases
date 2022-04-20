/*
Realizar una clase Botella que contenga las siguientes propiedades y
comportamientos:
Propiedades
- float Capacidad: La capacidad total de carga del recipiente.
- float Ocupación: La carga actual del recipiente.
- bool Tapada: Determina si la botella se encuentra tapada o no.
Comportamientos
- Llenar (float): Debe permitir aumentar la ocupación del recipiente pero nunca por
encima de su capacidad.
- Vaciar(float): Debe permitir disminuir la ocupación del recipiente pero nunca por
debajo de 0.
- Vaciar(): Debe vaciar por completo la ocupación del recipiente.
- Tapar(): Debe tapar la botella.
- Destapar(): Debe destapar la botella.
- Hacer métodos que permitan obtener la capacidad, la ocupación y la disponibilidad
de la botella(esto último representa cuánto tiene disponible aún para cargar).
- Al crear un objeto Botella se puede suministrar la capacidad del mismo. Si no se
indica, debe ser 100 por defecto. En cualquier caso, la ocupación será inicialmente
de 0.
- Todos los métodos que consideren necesarios deben limitarse a que la botella se
encuentre destapada. De lo contrario, no podrán realizarse. Ejemplo: No se puede
vaciar una botella tapada.
*/
#pragma once
class Botella{
private:
	float capacidad, ocupacion;
	bool tapada;
public:
	// CONSTRUCTORES
	Botella(float);
	Botella();

	void llenar(float), vaciar(float);
	void vaciar();
	void tapar();
	void destapar();

	//GETTERS
	float getCapacidad() { return capacidad; };
	float getOcupacion() { return ocupacion; };
	float getDisponibilidad() { return capacidad - ocupacion; };
	
};

