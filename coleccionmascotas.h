#ifndef COLECCIONMASCOTAS_H
#define COLECCIONMASCOTAS_H
#include "mascota.h"

class coleccionmascotas {
private:
	int cant;
	int tam;
	coleccionmascotas** mascota;

public:
	coleccionmascotas(int);
	~coleccionmascotas();
	int getCant();
	int getTam();
	void setCant(int);
	void setTam(int);
	void agregarMascota(mascotas**);
	void mostrarMascotas();
};
#endif