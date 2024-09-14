#ifndef DOCTOR_H
#define DOCTOR_H
#include "mascota.h"
#include "horario.h"
using namespace std;
class doctor {
private:
	string nombre;
	doctor** masc;
	int tam = 60;
	int cant = 0;
	doctor** dias;
public:
	doctor(string);
	void agregarPaciente(int);
	string getPacientes();
	bool horarioDisponible(int);
	~doctor();
};
#endif // 
