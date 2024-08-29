#include "Mascota.h"

Mascota::Mascota()
{
	nombre = " ";
	tipo = ' ';

}

Mascota::Mascota(string nom, char tp)
{
	this->nombre = nom;
	this->tipo = tp;
}

void Macota::setNombre(string nom)
{
	this->nombre = nom;
}

string Macota::getNombre()
{
	return nombre;
}

void Macota::setTipo(char tp)
{
	this->tipo = tp;
}

string Macota::getTipo()
{
	return tipo;
}

string Macota::mostrarMascota()
{
	stringstream s;
	s<<"Nombre de la mascota:"<<nombre<<endl;
	s << "Tipo:" << tipo << endl;
	return s.str();
}
