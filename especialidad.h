#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include<iostream>
#include"doctor.h"
using namespace std;

class especialidad {
private:
	string especialidad;
	doctor** doc;
	int tam = 10;
	int cant = 0;
};
#endif // !ESPECIALIDAD_H
