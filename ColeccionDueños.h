#include "Due�o.h"
class ColeccionDue�os {
private:
	int tam;
	int cant;
	Due�o** duenno;
public:
	ColeccionDue�os(int);
	~ColeccionDue�os();
	void setTam();
	void setCant();
	int getTam();
	int getCant();
	void ingresarDuennos(Due�o*);
	string mostrarDue�os();

};