#include <iostream>
#include <sstream>
class Macota {
private:
	std::string nombre;
	char tipo;
public:
	Mascota();
	Mascota(std::string, char);
	void setNombre(std::string);
	std::string getNombre();
	void setTipo(char);
	std::string getTipo();
	std::string mostrarMascota();
};
