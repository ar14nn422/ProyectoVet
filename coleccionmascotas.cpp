#include "coleccionmascotas.h"

Mascotas::Mascotas(int n)
{
	cant = 0;
	tam = n;
	mascota = new Mascota * [n];
	for (int i = 0; i < tam; i++)
		mascota[i] = new Mascota;
}

Mascotas::~Mascotas()
{
	for (int i = 0; i < cant; i++) {
		delete mascota[i]; 
	}
	delete[] mascota; 
}

int Mascotas::getCant()
{
	return cant;
}

int Mascotas::getTam()
{
	return tam;
}

void Mascotas::setCant(int ncant)
{
	cant = ncant;
}

void Mascotas::setTam(int ntam)
{
	tam = ntam;
}

void Mascotas::agregarMascota(Mascotas* nMascota)
{
	if (cant < tam) {
		mascota[cant] = nuevaMascota; 
		cant++;
	}
}

string Mascotas::mostrarMascotas()
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s << mascota[i]->mostrarMascotas()<<endl;
	}
}
