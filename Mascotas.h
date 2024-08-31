#include "Mascota.h"
#include  <iostream>
class Mascotas {
private:
	int cant;
	int tam;
	Mascotas** mascota;

public:
	Mascotas(int);
	~Mascotas();
	int getCant();
	int getTam();
	void setCant(int);
	void setTam(int);
	void agregarMascota(Mascotas**);
	void mostrarMascotas();
};