#include "ColeccionDue�os.h"

ColeccionDue�os::ColeccionDue�os(int n)
{
	tam = n;
	cant = 0;
	duenno = new Due�o * [n];
	for (int i = 0; i < tam; i++) {
		duenno[i] = new Due�o();
	}
}

ColeccionDue�os::~ColeccionDue�os()
{
	for (int i = 0; i < cant; i++) {
		delete duenno[i];
	}
	delete[] duenno;
}

void ColeccionDue�os::setTam()
{

}

void ColeccionDue�os::setCant()
{
}

int ColeccionDue�os::getTam()
{
	return 0;
}

int ColeccionDue�os::getCant()
{
	return 0;
}

void ColeccionDue�os::ingresarDuennos(Due�o* nuevodue�o)
{
	if (cant < tam) {
		duenno[cant] = nuevodue�o;
		cant++;
	}
}

string ColeccionDue�os::mostrarDue�os()
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s << duenno[i]->mostrarMasc_d() << endl;
	}
	
	return s.str();
}
