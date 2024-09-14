#ifndef HORARIO_H
#define HORARIO_H
#include"dia.h"
using namespace std;
class horario {
private:
	int cant;
	int tam;
	horario** day;
public:
	horario();
	string horarioD(dia*);
	~horario();
};
#endif // !HORARIO_H
