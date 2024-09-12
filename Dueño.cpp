#include "Dueño.h"
Dueño::Dueño() {
	NombreDuenno = 0;
	mascotas = nullptr;
}
Dueño::Dueño(string nombred, coleccionmascotas* mascotas) {
	NombreDuenno = nombred;
	mascotas = mascotas;
}
void Dueño::setNombreDuenno(string nombred)
{
	NombreDuenno = nombred;
}

void Dueño::setColeccionmascotas(coleccionmascotas* mascotas)
{
	mascotas = mascotas;
}

string Dueño::getNombreDuenno()
{
	return NombreDuenno;
}

coleccionmascotas* Dueño::getMascotas()
{
	return mascotas;
}

void Dueño::asignarMascotas()
{
	mascota* nuevaMascota = new coleccionmascotas();
	mascota->agregarMascota(nuevaMascota);

}

string Dueño::mostrarMasc_d()
{
	stringstream s;
	s << NombreDuenno << endl;
	s << mostrarMascotas() << endl;
	return s.str();
}
