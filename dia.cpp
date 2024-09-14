#include "dia.h"

dia::dia() {
	cant = 0;
	tam=8;
	hor [tam] = new horas*
	for (i = 0; i < tam;i++) {
		hor[i] = new horas();
		hor[i]->setEstado(false);
	}
}
bool dia::getDisponible() {
	for (i;i < tam;i++) {
		return hor[i]->getEstado();
	}
}
dia::~dia() {
	for (i;i < tam;i++) {
		delete hor[i];
	}
	delete[] hor;
}