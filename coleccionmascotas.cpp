#include "coleccionmascotas.h"

coleccionmascotas::coleccionmascotas(int n)
{
	cant = 0;
	tam = n;
	mascotas = new mascota * [n];
	for (int i = 0; i < tam; i++)
		mascotas[i] = new Mascota();
}

coleccionmascotas::~coleccionmascotas()
{
	for (int i = 0; i < cant; i++) {
		delete mascota[i]; 
	}
	delete[] mascota; 
}

int coleccionmascotas::getCant()
{
	return cant;
}

int coleccionmascotas::getTam()
{
	return tam;
}

void coleccionmascotas::setCant(int ncant)
{
	cant = ncant;
}

void coleccionmascotas::setTam(int ntam)
{
	tam = ntam;
}

void coleccionmascotas::agregarMascota(mascota* nMascota)
{
	if (cant < tam) {
		mascota[cant] = nMascota;
		cant++;
	}
}



string coleccionmascotas::mostrarMascotas()
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s << mascota[i]->mostrarMascotas()<<endl;
	}
	return s.str();
}
