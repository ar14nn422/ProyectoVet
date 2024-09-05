#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include<iostream>
#include<sstream>
#include"submenuadministracion.h"
#include"submenucontrolcitas.h"
#include"busquedasylistados.h"
using namespace std;
class menuprincipal {

public:
	menuprincipal();
	void menu();
	void opcionUno();
	void opcionDos();
	void opcionTres();
};
#endif 