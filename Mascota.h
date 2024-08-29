#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>
#include <sstream>
using namespace std;
class Mascota {
private:
	string nombre;
	char tipo;
public:
	Mascota();
	Mascota(string, char);
	void setNombre(string);
	string getNombre();
	void setTipo(char);
	string getTipo();
	string mostrarMascota();
};
#endif // !MASCOTA_H


