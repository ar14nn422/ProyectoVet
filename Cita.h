#include "ColeccionDue�os.h"
#include "coleccionmascotas.h"
#include "ColeccionDoctores.h"
class Cita {
private:
	int hora;
	string dia;
	bool estado;
	ColeccionDoctores* doctor;//cambiar por el nombre de la coleccion
	ColeccionDue�os* duenno;
	coleccionmascotas* paciente;
public:
	Cita(int, string,bool,  ColeccionDoctores*, ColeccionDue�os*,coleccionmascotas*);
	Cita();
	int getHora();
	string getDia();
	void setHora(int);
	void setDia(string);
	void setEstaddo(bool);
	bool getEstado();
	ColeccionDoctores* getDoctor();
	ColeccionDue�os* getDuenno();
	coleccionmascotas* getPaciente();
	void setDoctor(ColeccionDoctores*);
	void setDuenno(ColeccionDue�os*);
	void setPaciente(coleccionmascotas*);
	void reactivarCita();
	void cancelarCita();
	void modificarCita(int, string);
	string ImprimirCita();




};