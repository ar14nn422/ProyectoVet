#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include<iostream>
#include<sstream>
using namespace std;
class menuprincipal {
private:
	int respuesta;
public:
	menuprincipal();
	menuprincipal(int);
	void setRespuesta(int);
	int getRespuesta();
	string mostrarMenuPrincipal();
};
#endif 