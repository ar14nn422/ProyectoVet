#ifndef DIA_H
#define DIA_H
#include "horas.h"
using namespace std;
class dia {
private:
	int tam;
	int cant;
	dia** hor;
public:
	dia();
	bool getDisponible();
	~dia();
};
#endif