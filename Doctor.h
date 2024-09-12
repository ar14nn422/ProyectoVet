#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include "mascota.h"
using namespace std;
class doctor {
private:
	string nombre;
	mascota** masc;
	int tam = 60;
	int cant = 0;
public:
	doctor(string);
	agregarPaciente(mascota* masc);
	getPacientes();
	~doctor();
};
#endif // 
