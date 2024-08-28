#include "Mascota.h"

Macota::Mascota()
{
	nombre = " ";
	tipo = ' ';

}

Macota::Mascota(std::string nom, char tp)
{
	this->nombre = nom;
	this->tipo = tp;
}

void Macota::setNombre(std::string nom)
{
	this->nombre = nom;
}

std::string Macota::getNombre()
{
	return nombre;
}

void Macota::setTipo(char tp)
{
	this->tipo = tp;
}

std::string Macota::getTipo()
{
	return tipo;
}

std::string Macota::mostrarMascota()
{
	std::stringstream s;
	s<<"Nombre de la mascota:"<<nombre<<std::endl;
	s << "Tipo:" << tipo << std::endl;
	return s.str();
}
