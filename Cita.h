#include "ColeccionDue�os.h"
#include "coleccionmascotas.h"
#include "ColeccionDoctores.h"
class Cita {
private:
	int hora;
	string dia;
	ColeccionDoctores* doctor;
	ColeccionDue�os* duenno;
	coleccionmascotas* paciente;
public:
	Cita(int, string, ColeccionDoctores*, ColeccionDue�os*,coleccionmascotas*);
	Cita();
	int getHora();
	string getDia();
	void setHora(int);
	void setDia(string);
	ColeccionDoctores* getDoctor();
	ColeccionDue�os* getDuenno();
	coleccionmascotas* getPaciente();
	void setDoctor(ColeccionDoctores*);
	void setDuenno(ColeccionDue�os*);
	void setPaciente(coleccionmascotas*);
	void cancelarCita();
	void modificarCita(int, string);
	string ImprimirCita();




};