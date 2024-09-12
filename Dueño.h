
#include "coleccionmascotas.h"
#ifndef DUEÑO_H
#define DUEÑO_H
class Dueño {
public:
	string NombreDuenno;
	coleccionmascotas* mascotas;
private:
	Dueño();
	Dueño(string, coleccionmascotas*);
	void setNombreDuenno(string);
	void setColeccionmascotas(coleccionmascotas*);
	string getNombreDuenno();
	coleccionmascotas* getMascotas();
	void asignarMascotas();
	string mostrarMasc_d();



};
#endif // !DUEÑO_H
